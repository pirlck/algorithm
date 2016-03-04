// 
// 剑指Offer之面试题4：二维数组中的查找(Yong式矩阵的查找) 
// 在排序二维数组中查找某数
//
#ifndef _FIND_ELEM_
#define _FIND_ELEM_

#include <iostream>
using namespace std;

bool FindMartix(int* martix, int rows, int columns, int number)
{
	bool status = false;
	
	//check input paraments
	if (martix == NULL || rows < 0 || columns < 0)
		return status;
	//initlize 
	int row = rows; int column = columns;

	//end condtion
	while (column > 0 && row < rows)
	{
		//state trans
		if (martix[row*columns + column] == number)
		{
			status = true;
			cout << row + 1 << "  " << column + 1 << endl;
			return status;
		}
		if (martix[row*columns + column] > number)
			column--;
		else
			row++;
	}
	return status;
}

//int main()
//{
//	int martix[] = { 1, 2, 8, 9,
//		2, 4, 9, 2,
//		4, 7, 10, 3,
//		6, 8, 11, 15 };
//	FindMartix(martix, 4, 4, 11);
//
//	return 0;
//}

#endif
