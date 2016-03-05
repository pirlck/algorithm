#ifndef _BACK_K_NUM_
#define _BACK_K_NUM_

//
//剑指Offer之面试题15：链表中倒数第k个结点
//
#include "alg_utils.h"
#include "list_int.h"

void KnumEnd(ListNode* head,int k)
{
	ListNode* pFaward = head;

	//check input params
	if (head == NULL)
	{
		cout << "wrong input array!" << endl; 
		return;
	}

	while ((--k) > 0)
	{
		pFaward = pFaward->pNext;
		if (pFaward ==NULL )
		{
			cout << "error input k! " << endl;
			return;
		}
	}
	
	while ( (pFaward->pNext) != NULL)
	{
		pFaward = pFaward->pNext;
		head = head->pNext;
	}
	cout << "List K num: "<<head->key << endl;
}

#endif


//int main()
//{
//	ListNode* pHead = CreateList(0);
//
//	for (size_t i = 1; i < 15; i++)
//	{
//		InsertNode(&pHead, i);
//	}
//
//	PrintList(pHead);
//
//	KnumEnd(pHead, 12);
//	KnumEnd(pHead, 20);
//	KnumEnd(pHead, 1);
//
//	return 0;
//}