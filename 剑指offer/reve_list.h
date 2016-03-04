#ifndef _REVESE_LIST_
#define _REVESE_LIST_

//
//剑指Offer之面试题5：逆向打印单链表
//

#include "alg_utils.h"

struct ListNode{
	int key;
	ListNode* pNext;
};

//
ListNode* CreateList(int key)
{
	ListNode* node = new ListNode;
	node->key = key;
	node->pNext = NULL;
	return node;
}

int InsertNode(ListNode** head,int key)
{
	ListNode* new_node = new ListNode;
	new_node->key = key;
	new_node->pNext = *head;
	*head = new_node;

	return 0;
}

int PrintList(ListNode* head)
{
	//no need to a temp pointer
	ListNode* pList = head;
	while (pList)
	{
		cout << pList->key << "->";
		pList = pList->pNext;
	}
	cout << endl;
	return 0;
}

#endif