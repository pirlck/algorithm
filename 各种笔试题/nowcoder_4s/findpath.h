#include "stdafx.h"
#include <string>
#include <iostream> 

using namespace std;

struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}

};

class LongestPath {
public:
	
	int len1; int count;
	
	int findPath(TreeNode* root) {
		
	}

	//find white
	int findw(TreeNode* root)
	{
		if (root == NULL)
			return 0;

		if (root->val == 0)
			;

	}

	//find black
	int findb(TreeNode* root)
	{

	}

};
