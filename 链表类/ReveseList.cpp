// ReveseList.cpp :loop && recursion
// 开始刷题之旅=。=

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* InitList( )
{
	Node* head = new Node;
	head->data = 0;
	head->next = NULL;
	return head;
}

int InsertNode(Node** head,int data)
{
	Node* inode = new Node;
	inode->data = data;
	
	inode->next = *head;
	*head = inode;
	return 0;
}

int DesList(Node* head)
{
	Node* pTmp;
	while (head)
	{
		pTmp = head->next;
		delete head;
		head = pTmp;
	}
	return 0;
}

void PrintList(Node* head)
{
	Node* tmp_node = head;
	while (tmp_node)
	{
		cout << tmp_node->data << "->";
		tmp_node = tmp_node->next;
	}
	cout << endl;
}



//单链表的转置,循环方法
//单层指针自己本身的值并没有改变
//用双层指针传入指针地址，然后就可以改变
//此处仅为复习下(int* a,int* b)知识点
//指针的拷贝，改变需从地址开始
void* ReverList(Node** head)
{
	if ( (*head) == NULL || (*head)->next == NULL)
		return NULL;
	Node* pre = NULL;
	Node* next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = (*head);
		*head = next;
	}
	*head = pre;
	return NULL;
}

//单链表的转置,递归方法
Node* reverseByRecursion(Node *head)
{
	//第一个条件是判断异常，第二个条件是结束判断
	if (head == NULL || head->next == NULL)
		return head;

	Node *newHead = reverseByRecursion(head->next);

	head->next->next = head;
	head->next = NULL;

	return newHead;    //返回新链表的头指针
}


int main()
{
	Node* pList = InitList();
	
	for (int i=1 ; i < 20; i++)
	{
		InsertNode(&pList, i);
	}
	PrintList(pList);
	
    ReverList(&pList);
	PrintList(pList);

	DesList(pList);
	return 0;
}

