//#include <vector>
//#include <iostream>
//
//
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	std::vector<int> inorderTraversal(TreeNode* root) {
//		std::vector<int> result;
//		if (root != NULL)
//		{
//			if (root->left != NULL)
//			{
//				std::vector<int> now = inorderTraversal(root->left);
//				result.insert(result.end() , now.begin(), now.end());
//			}
//			int x = root->val;
//			result.push_back(x);
//			
//			if (root->right != NULL)
//			{
//				std::vector<int> now = inorderTraversal(root->right);
//				result.insert(result.end(),now.begin(), now.end());
//			}
//			
//		}
//		
//		return result;
//	}
//};
//int main()
//{
//	TreeNode *root=new TreeNode(1);
//	TreeNode *two=new TreeNode(2);
//	TreeNode *three=new TreeNode(3);
//	root->right = two;
//	two->left = three;
//	//std::cout << root->val << std::endl;
//	Solution s;
//	std::vector<int> result;
//	result=s.inorderTraversal(root);
//	for (auto o : result)
//	{
//		std::cout<<"fadfadfdfads" << o << std::endl;
//	}
//	system("pause");
//}