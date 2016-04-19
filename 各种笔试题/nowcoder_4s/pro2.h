//
// 找出和专家意见最吻合的划分
//
#include <iostream> 
#include <string>
#include <vector>

using namespace std;

class Partition{
public:
	vector<int> getPartition(const vector<vector<int> >& land, int n, int m) 
	{
		col = n; row = m;
		int i;
		for (i = 0; i < n + 1; i++)
		{
			if (i == 0)
			{
				int r = CalRight(land,i);
				index.push_back(r);
				continue;
			}
			if (i == n && n > 1)
			{
				int l = CalLeft(land,i);
				index.push_back(l);
				continue;
			}

			int r = CalRight(land,i);
			int l = CalLeft(land,i);
			index.push_back(r + l);

		}

		//find index of partion
		int partion = 0; int temp = index[n];
		for (i = n; i >= 0; i--)
		{
			if (index[i] >= temp)
			{
				partion = i;
				temp = index[i];
			}
		}
		
		//return partion
		vector<int>P;
		P.push_back(partion); P.push_back(partion + 1);
		return P;
	}

	

private:
	int CalRight(const vector<vector<int> >& land,int s)
	{
		int count = 0;
		int i, j;
		for (j = 0; j < row;j++)
			for (i = s; i < col; i++)
			{
				if (land[j][i] == 1)
					count++;
			}
	
		return count;
	}
	
	
	int CalLeft(const vector<vector<int> >& land, int s)
	{
		int count = 0;
		int i, j;
		for (j = 0; j < row; j++)
			for (i = 0; i <s; i++)
			{
				if (land[j][i] == 0)
					count++;
			}

		return count;
	}

	vector<int> index;
	int col, row;
};


//class Partition {
//public:
//	vector<int> getPartition(const vector<vector<int> >& land, int n, int m) {
//		// write code here
//	}
//};