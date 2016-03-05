#ifndef _ODD_FRONT_H_
#define _ODD_FRONT_H_

//
//剑指Offer之面试题14：调整数组顺序使奇数位于偶数前面
//
#include "alg_utils.h"

void SetOddFront(int* seque,int begin,int end)
{
	int temp;
	//check input params
	if ( (begin > end) || (seque == NULL))
	{
		cout << "wrong input params !" << endl;
		return;
	}
	
	while (begin < end)
	{
		while ((begin < end) && (seque[begin]%2) == 1 )
			begin++;

		while ( (begin<end) && (seque[end]%2)==0 )
			end--;

		if (begin < end)
		{
			//swap
			temp = seque[begin];
			seque[begin] = seque[end];
			seque[end] = temp;
			begin++, end--;
		}
	}
}

#endif


//int main()
//{
//	int SequeInt[20] = { 0 };
//	for (size_t i = 0; i < 19; i++)
//		SequeInt[i] = i;
//
//	SetOddFront(SequeInt, 0, 19);
//
//	for (size_t i = 0; i < 19; i++)
//		cout << SequeInt[i] << ' ';
//
//	return 0;
//}