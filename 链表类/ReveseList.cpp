// ReveseList.cpp :loop && recursion
// 开始刷题之旅=。=

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

//单链表的转置,循环方法
Node* reverseByLoop(Node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	Node *pre = NULL;
	Node *next = NULL;
	while (head != NULL)
	{
		next = head->next;

		head->next = pre;
		pre = head;
		head = next;
	}
	return pre;
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


//两种写法，还没来得及测试
int main()
{

}


