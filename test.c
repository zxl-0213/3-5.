#include"SList.h"
int main()
{
	SListNode* plist = NULL;
	SListPushBack(&plist,1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);



	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);


	SListPushFront(&plist, 1);
	SListPushFront(&plist, 0);
	SListPrint(plist);


	SListPopFront(&plist);
	SListPrint(plist);



	SListNode* find = SListFind(plist, 2);
	SListPrint(plist);


	SListInsertAfter(plist->next->next, 5);
	SListPrint(plist);


	SListEraseAfter(plist->next);
	SListEraseAfter(plist->next);

	SListPrint(plist);

	return 0;
}
