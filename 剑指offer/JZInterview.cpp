// JZInterview.cpp : 
//
#include "stdafx.h"
#include <stdio.h>
#include "alg_utils.h"
#include "find_2array.h"
#include "replace_space.h"
#include "reve_list.h"


int main()
{
	ListNode* pListHead = CreateList(0);
	for (int i = 1; i < 10; i++)
		InsertNode(&pListHead,i);
	
	PrintList(pListHead);
	
	return 0;
}
