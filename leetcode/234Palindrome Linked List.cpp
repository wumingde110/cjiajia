//#include<iostream>
//#include<vector>
//
//
// struct ListNode {
//    int val;
//     ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//	bool isPalindrome(ListNode* head) {
//		//第一种想法，当这个数和下一个数不一样的时候，将标记换为下一个数，知道有一个数和标记数的值一样
//		//例如：123321
//		//但是发现这种方法只适合个数为偶数的回文数组，不适合个数为奇数的回文数组。
//		//第二种想法，就是直接取值，放到一个数组中，在进行比较回文。
//		std::vector<int> array;
//		bool istrue =true;
//		while (head!= NULL)
//		{
//			std::cout << head->val << std::endl;
//			array.push_back(head->val);
//			head = head->next;
//		}
//		int length = array.size();
//		for (int i = 0; i < length / 2; i++)
//		{
//			if (array[i] != array[length-1 - i])
//			{
//				istrue = false;
//			}
//		}
//		return istrue;
//	}
//};
//int main()
//{
//	ListNode *one = new ListNode(1);
//	ListNode *two = new ListNode(2);
//	ListNode *three = new ListNode(3);
//	one->next = two;
//	Solution s;
//	bool istrue=s.isPalindrome(one);
//	std::cout << istrue << std::endl;
//	system("pause");
//}