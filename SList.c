#include"SList.h"
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


//Î²²å
void SListPushBack(SListNode** pplist, SLTDataType x)
{

	if (*pplist == NULL)
	{
		SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
		if (newNode == NULL)
		{
			printf("ÉêÇëÊ§°Ü");
			exit(-1);
		}
		newNode->data = x;
		newNode->next = NULL;
		*pplist = newNode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
		if (newNode == NULL)
		{
			printf("ÉêÇëÊ§°Ü");
			exit(-1);
		}
		newNode->data = x;
		newNode->next = NULL;
		tail->next = newNode;
	}
}

//Î²É¾
void SListPopBack(SListNode** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else if((*pplist)->next==NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* tail = (*pplist)->next;
		SListNode* prev = *pplist;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev -> next = NULL;
	}
	
}


//Í·²å
void SListPushFront(SListNode** pplist, SLTDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = *pplist;
	*pplist = newNode;
}


//Í·É¾
void SListPopFront(SListNode** pplist)
{

	SListNode* next = (*pplist)->next;
	SListNode* cur = *pplist;
	if (*pplist == NULL)
		return;
	else
	{
		free(cur);
		*pplist = next;
	}

}
//²éÕÒ
SListNode* SListFind(SListNode* plist, SLTDataType x)
{
	SListNode* find = plist;
	while (find != NULL)
	{
		if (find->data == x)
		{
			find->data = 3;
			return find;
		}
		else
		{
			find = find->next;
		}
	}
	
		return NULL;
	
}
//Ëæ»ú²å
void SListInsertAfter(SListNode* pos, SLTDataType x) 
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = pos->next;
	pos->next = newNode;
	

	
}
//Ëæ»úÉ¾
void SListEraseAfter(SListNode* pos)
{
	if (pos->next != NULL)
	{
		SListNode* next = pos->next;
		SListNode* nextnext = next->next;
		pos->next = nextnext;
		free(next);
	}
	else
		return;
	
}








