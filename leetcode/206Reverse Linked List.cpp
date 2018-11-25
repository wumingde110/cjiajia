//#include<iostream>
//#include<vector>
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//	ListNode * reverseList(ListNode* head) {
//		ListNode *result = NULL;
//		while (head)
//		{
//			ListNode *pre = head->next;
//			head->next = result;
//			result =head;
//			head = pre;
//		}
//		return result;
//
//
//	}
//};
//int main()
//{
//	ListNode *o = new ListNode(1);
//	ListNode *t = new ListNode(2);
//	ListNode *th = new ListNode(3);
//	o->next = t;
//	t->next = th;
//	Solution s;
//	ListNode *hhh=s.reverseList(o);
//	while (hhh != NULL)
//	{
//		std::cout<<"xia" << hhh->val << std::endl;
//		hhh = hhh->next;
//	}
//	system("pause");
//}