//#include<vector>
//#include<iostream>
//#include<algorithm>
// struct ListNode {
//     int val;
//     ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//class Solution {
//public:
//	bool hasCycle(ListNode *head) {
//		 //��һ���뷨����Ϊ���ҳ��Ƿ����һ������Ҫ�γ�һ��������Ȼ��һ���ڵ����һ���ڵ���һ�����ֹ�
//		//�Ľڵ㡣���ԣ���һ���뷨�ǣ�ѭ�������Ƿ��нڵ��������ֹ���
//		//�ڶ��ַ�����Floyd��Ȧ����Floyd Cycle Detection Algorithm���ֳƹ�;�����㷨����һ������������״̬
//		//�����������������������ж��Ƿ���ڻ�������û�������볤�ȵ��㷨��
//		std::vector<int> now;
//		ListNode *slow = head;
//		ListNode *fast = head;
//		while (fast != NULL && fast->next != NULL)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//			if (slow == fast)
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//};
//int main()
//{
//
//}