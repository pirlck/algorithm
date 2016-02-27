// ReveseList.cpp :loop && recursion
// ��ʼˢ��֮��=��=

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



//�������ת��,ѭ������
//����ָ���Լ������ֵ��û�иı�
//��˫��ָ�봫��ָ���ַ��Ȼ��Ϳ��Ըı�
//�˴���Ϊ��ϰ��(int* a,int* b)֪ʶ��
//ָ��Ŀ������ı���ӵ�ַ��ʼ
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

