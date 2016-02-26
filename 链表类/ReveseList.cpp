// ReveseList.cpp :loop && recursion
// ��ʼˢ��֮��=��=

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

//�������ת��,ѭ������
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

//�������ת��,�ݹ鷽��
Node* reverseByRecursion(Node *head)
{
	//��һ���������ж��쳣���ڶ��������ǽ����ж�
	if (head == NULL || head->next == NULL)
		return head;

	Node *newHead = reverseByRecursion(head->next);

	head->next->next = head;
	head->next = NULL;

	return newHead;    //�����������ͷָ��
}


//����д������û���ü�����
int main()
{

}


