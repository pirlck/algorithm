// Console1.cpp : 
//
#include "stdafx.h"
#include "findpath.h"
#include "pro2.h"
#include <string>
#include <iostream> 

using namespace std;

//class Transform {
//public:
//	string trans(string s, int n) {
//		// write code here
//	}
//};

int main()
{
	//string str;
	//cout << "input:" << endl;
	//getline(cin, str);
	vector<vector<int>>vec;
	vector<int> line;

	for (int i = 0; i < 4;i++)
		line.push_back(1);

	vec.push_back(line);

	line.clear();
	for (int i = 0; i < 4; i++)
		line.push_back(0);
	vec.push_back(line);

	line.clear();
	line.push_back(1); line.push_back(0); line.push_back(1); line.push_back(1);
	vec.push_back(line);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << vec[i][j] << '\t';
		cout << endl;
	}


	line.clear();
	Partition pa;
	line = pa.getPartition(vec,4,3);
	cout << line[0] <<'\t'<<line[1]<< endl;


	return 0;
}