
//输出环形数组，腾讯实习的一道笔试题
//这么基础的一题.竟然做错了..QAQ

#include <iostream>

using namespace std;

//可以定义一个很大的二维数组

//void LoopArray(int loop[][50],int N)
//{
//	int col = N;
//	int count = 0;
//	int i=0, j=0;
//	int flag = N;
//	
//	while (N>0)
//	{
//		while (flag)
//		{
//			count++;
//			loop[i][j] = count;
//			i++;
//			flag--;
//		}
//		i--; j++; flag = N - 1;
//		while (flag)
//		{
//			count++;
//			loop[i][j] = count;
//			j++; flag--;
//		}
//		j--; i--; flag = N - 1;
//		while (flag)
//		{
//			count++;
//			loop[i][j] = count;
//			i--; flag--;
//		}
//		i++; j--;
//		flag = N - 2;
//		while (flag)
//		{
//			count++;
//			loop[i][j] = count;
//			j--;
//			flag--;
//		}
//		j++; i--;
//		N = N - 2;
//		flag = N;
//	}
//
//}


//用vector替代
int loop_array[100][100];

void LoopArray(int loop[][100],int N)
{
	int cir = 0; 
	int count = 0;

	while (true)
	{
		if (loop[cir][cir] != 0)
			break;

		for (int i = cir; i < N-cir; i++)
		{
			count++;
			loop[cir][i] = count;
		}
		for (int j = cir + 1; j < N - cir;j++)
		{
			count++;
			loop[j][N-1-cir] = count;
		}
		for (int i = N -cir - 2; i >=cir; i--)
		{
			count++;
			loop[N-1-cir][i] = count;
		}
		for (int j = N - cir - 2; j > cir; j--)
		{
			count++;
			loop[j][cir] = count;
		}

		if (loop[cir][cir] == 0)
		{
			count++;
			loop[cir][cir] = count; 
		}

		cir++;

	}
}

//网上代码
int main(void) {
	int n;
	while (cin >> n) {
		map<int, map<int, int> > tbl;
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				tbl[i][j] = 0;

		int cnt = 1;
		int cir = 0;
		while (true) {
			if (tbl[cir][cir] != 0)
				break;

			int siz = n - cir * 2;

			for (int i = 0; i < siz - 1; ++i)
				tbl[i + cir][cir] = cnt++;
			for (int j = 0; j < siz - 1; ++j)
				tbl[cir + siz - 1][cir + j] = cnt++;
			for (int i = siz - 1; i > 0; --i)
				tbl[cir + i][cir + siz - 1] = cnt++;
			for (int j = siz - 1; j > 0; --j)
				tbl[cir][cir + j] = cnt++;

			if (tbl[cir][cir] == 0)
				tbl[cir][cir] = cnt++;

			++cir;
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cout << setw(4) << tbl[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}


#endif
