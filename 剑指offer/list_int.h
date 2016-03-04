#ifndef _LIST_INT_H_
#define _LIST_INT_H_

#include <iostream>
using namespace std;

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

int InsertNode(ListNode** head, int key)
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