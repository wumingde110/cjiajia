//#include<iostream>
//#include<vector>
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//	ListNode * removeNthFromEnd(ListNode* head, int n) {
//		//��������ڲ�֪������Ĵ�С������û�а취����ķ��ʽڵ�
//		//���Ծ�Ҫһ��һ���Ĺ�ȥ��������������һ��������ÿһ���ڵ�ĵ�ַ
//		//Ȼ�����n�Ĵ�С���������ڵ�Ԫ��ֱ�ӽ����޸ġ�
//		ListNode *result = head;
//		std::vector<ListNode*> one;
//		while (head)
//		{
//			one.push_back(head);
//			head = head->next;
//		}if(one.size()>n)
//		{
//			one[one.size() - n - 1]->next = one[one.size() - n]->next;
//		}
//		else
//		{
//			return result->next;
//		}
//		return result;
//	}
//};
//int main()
//{
//
//}
