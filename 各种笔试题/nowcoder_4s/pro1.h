#include <iostream>
#include <vector>
#include <string>


using namespace std;

// "This is a sample,16"
// "SAMPLE A IS tHIS"

class Transform {
public:
	string trans(string s, int n) 
	{
		// write code here
		Convert(s);
		Traverse(s);
		cout << s << endl;
	}
	void ReverseWord(string &str, int begin, int end)
	{
		string tmp = str.substr(begin, end + 1 - begin);
		int i, j;
		for (i = begin, j = end - begin; i <= end; i++, j--)
		{
			str[i] = tmp[j];
		}
	}

	void Traverse(string &str)
	{
		int begin, end;
		for (begin = end = 0; end<str.size(); end++)
		{
			if (str[end] == ' ')
			{
				ReverseWord(str, begin, end - 1);
				begin = end + 1;
			}
		}
		ReverseWord(str, begin, end - 1);
		ReverseWord(str, 0, str.size() - 1);
	}

private:
	void Convert(string& str)
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 97)
				str[i] = str[i] - 32;
			else if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
		}
	}

};