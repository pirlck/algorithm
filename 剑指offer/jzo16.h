#ifndef _REVERSE_LIST_H_
#define _REVERSE_LIST_H_

//
//剑指Offer之面试题16：反转链表
//
#include "alg_utils.h"

struct ListNode{
	int key;
	ListNode* pNext;
};

//reverse farward list;
ListNode* ReverList(ListNode* head)
{
	if (head == NULL)
		return NULL;

	ListNode* pre = NULL;
	ListNode* front = NULL;

	while (head){
		front = head->pNext;
		head->pNext = pre;
		pre = head;
		head = front;
	}
	return pre;
}

#endif // !_REVERSE_LIST_H_


////reverse farward list;
//ListNode* ReverList(ListNode* head)
//{
//	if (head == NULL)
//		return NULL;
//
//	ListNode* pre = NULL;
//	ListNode* front = NULL;
//
//	while (head){
//		front = head->pNext;
//		head->pNext = pre;
//		pre = head;
//		head = front;
//	}
//	return pre;
//}
//
//
//
//int main()
//{
//	ListNode* pHead = CreateList(0);
//	for (int i = 1; i < 10; i++)
//		InsertNode(&pHead, i);
//	PrintList(pHead);
//
//	ListNode* NewHead = ReverList(pHead);
//	PrintList(NewHead);
//
//	return 0;
//}

///////////////////////////////////不需要返回指针的方法
/////直接在原头指针的上面修改..
////reverse farward list;
//void ReverList(ListNode** head)
//{
//	if (*head == NULL)
//		return NULL;
//
//	ListNode* pre = NULL;
//	ListNode* front = NULL;
//
//	while (*head){
//		front = (*head)->pNext;
//		(*head)->pNext = pre;
//		pre = (*head);
//		(*head) = front;
//	}
//	(*head) = pre;
//	return ;
//}