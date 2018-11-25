//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
// //Definition for a binary tree node.
////主要将根的左子树和右子树进行递归，不要想得太多，要从大方向上把握。
//struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	TreeNode * buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
//		if (preorder.size() == 0||inorder.size()==0)
//		{
//			return NULL;
//		}
//		TreeNode *t = new TreeNode(preorder[0]);
//		int middle=find(inorder.begin(),inorder.end(),preorder[0])-inorder.begin();
//		vector<int> one;
//		one.assign(preorder.begin() + 1, preorder.begin() + middle + 1);
//		vector<int> two;
//		two.assign(inorder.begin(), inorder.begin() + middle + 1);
//		t->left = buildTree(one, two);
//		one.assign(preorder.begin() + middle + 1, preorder.end());
//		two.assign(inorder.begin() + middle + 1, inorder.end());
//		t->right = buildTree(one, two);
//		return t;
//	}
//};
//
//
//
//void c(TreeNode* t)
//{
//	std::cout << t->val << std::endl;
//	if (t->left != NULL && t -> right != NULL)
//	{
//		c(t->left);
//		c(t->right);
//	}
//	if (t -> left == NULL&&t->right==NULL)
//	{
//		std::cout <<"NULL"<< std::endl;
//		std::cout << "NULL" << std::endl;
//		
//	}
//	if (t->right != NULL&&t->left==NULL)
//	{
//		std::cout << "NULL" << std::endl;
//		c(t->right);
//	}
//	if (t->left != NULL && t->right == NULL)
//	{
//		c(t->left);
//		std::cout << "NULL" << std::endl;
//	}
//}
//int main()
//{
//	std::vector<int> preorder = {3,9,5,12,8,6,14,21,20,15,7};
//	std::vector<int> inorder = {12,5,8,9,14,6,21,3,15,20,7};
//	/*std::vector<int> preorder = {1,2,3 };
//	std::vector<int> inorder = { 2,3,1};*/
//	/*std::vector<int> preorder = { };
//	std::vector<int> inorder = { };*/
//	Solution s;
//	TreeNode *t=s.buildTree(preorder,inorder);
//	std::cout << "show time" << std::endl;
//	c(t);
//	system("pause");
//	
//}
/*if (preorder.size() == 0)
{

return NULL;
}
if (preorder.size() == 1)
{
TreeNode *t = new TreeNode(preorder[0]);
return t;
}
if (preorder.size() == 2)
{
if (preorder[0] == inorder[0])
{
TreeNode *t = new TreeNode(preorder[0]);
TreeNode *ri = new TreeNode(preorder[1]);
t->right = ri;
return t;
}
else
{
TreeNode *t = new TreeNode(preorder[0]);
TreeNode *le = new TreeNode(preorder[1]);
t->left = le;
return t;
}
}*/
