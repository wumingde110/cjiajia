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
//		//��һ���뷨�������������һ������һ����ʱ�򣬽���ǻ�Ϊ��һ������֪����һ�����ͱ������ֵһ��
//		//���磺123321
//		//���Ƿ������ַ���ֻ�ʺϸ���Ϊż���Ļ������飬���ʺϸ���Ϊ�����Ļ������顣
//		//�ڶ����뷨������ֱ��ȡֵ���ŵ�һ�������У��ڽ��бȽϻ��ġ�
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