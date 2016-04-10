#ifndef _MERGE_SORT_LIST_
#define _MERGE_SORT_LIST_

//
//剑指Offer之面试题17：合并两个排序的链表
//

#include "alg_utils.h"
#include "list_int.h"


//返回值的话会产生新的拷贝
//指针值是会改变的
ListNode* MergeList(ListNode* head1, ListNode* head2)
{
	//end point
	if (head1 == NULL || head2 == NULL)
	{
		if (head1 == NULL && head2 == NULL)
			return NULL;
		if (head1 != NULL)
			return head1;
		else
			return head2;
	}
	//loop
	if (head1->key < head2->key)
	{
		ListNode*  h_node = MergeList(head1->pNext, head2);
		head1->pNext = h_node;
		return head1;
	}
	else
	{
		ListNode*  h_node2 = MergeList(head1, head2->pNext);
		head2->pNext = h_node2;
		return head2;
	}
}

#endif


//int main()
//{
//	ListNode* pHead1 = CreateList(11);
//	InsertNode(&pHead1, 6);
//	InsertNode(&pHead1, 6);
//	InsertNode(&pHead1, 5);
//	InsertNode(&pHead1, 3);
//	InsertNode(&pHead1, 1);
//
//
//	ListNode* pHead2 = CreateList(9);
//	InsertNode(&pHead2, 7);
//	InsertNode(&pHead2, 4);
//	InsertNode(&pHead2, 2);
//
//	ListNode* NewHead = MergeList(pHead1, pHead2);
//
//	PrintList(NewHead);
//
//	return 0;
//}