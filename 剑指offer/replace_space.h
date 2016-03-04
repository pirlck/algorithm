#ifndef _REPLACE_SPACE_
#define _REPLACE_SPACE_

//
//剑指Offer之面试题4：替换空格
// 

#include "alg_utils.h"

void* ReplaceSpace(char* re_str)
{
	if (re_str == NULL)
		return NULL;
	
	char* index = re_str;
	int space_num = 0;

	//not index == null
	while ((*index) != '\0')
	{
		if ((*index == ' '))
			space_num++;
		index++;
	}
	//cout << "space: " << space_num << endl;
	
	int len_str = strlen(re_str);
	int len_new = len_str + 2 * space_num;
	char* dst_str = new char[len_new+1];
	
	dst_str[len_new] = '\0';				//last pos'\0' to print
	len_str = len_str - 1;
	len_new = len_new - 1;
	while (len_str>=0)						//>=0
	{
		if (re_str[len_str] != ' ')
		{
			dst_str[len_new] = re_str[len_str];
			len_new--, len_str--;
		}
		else
		{
			dst_str[len_new--] = '0'; 
			dst_str[len_new--] = '2'; 
			dst_str[len_new--] = '%';
			
			len_str--;
		}
	}

	return dst_str;
}

//int main()
//{
//	char* d_str = "h l l,th  is k ccl! \0";
//	char* new_str = (char*)ReplaceSpace(d_str);
//	printf("ori str:%s \nrep str:%s \n", d_str, new_str);
//	return 0;
//}

#endif