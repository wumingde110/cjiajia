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
//	ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
//		//����˼�룬�жϵ�һ���͵ڶ������еĽڵ�Ĵ�С�������һ���нڵ����ô��
//		//�ڶ������еĽڵ�����һ�����еĽڵ��ǰ�棬�ڶ�������ָ����ƣ���һ������ָ��
//		//���䣬�����һ�����еĽڵ�Ƚ�С����ô��һ�����е�ָ����ƣ��ٽ��бȽϡ�
//		
//		ListNode *result = NULL;
//		if (l1 == NULL && l2 == NULL)
//		{
//			return NULL;
//		}
//		if ((l1->val) > (l2->val))
//		{
//			result = l2;
//			l2 = l2->next;
//		}
//		else 
//		{
//			result = l1;
//			l1 = l1->next;
//		}
//		std::cout<<"dfasdfads" << result->val << std::endl;
//		std::cout << result->next->val << std::endl;
//		ListNode *ooo = result;
//		while (l1!=NULL&&l2!=NULL)
//		{
//			std::cout << "����" << std::endl;
//			if ((l1->val) > (l2->val))
//			{
//				ListNode *temp = l2;
//				//temp->next = NULL;
//				result->next =temp;
//				l2 = l2->next;
//				result = result->next;
//			}
//			else 
//			{
//				ListNode *temp = l1;
//				//temp->next = NULL;
//				result->next = temp;
//				l1 = l1->next;
//				result = result->next;
//			}
//		}
//		if (l2 != NULL)
//		{
//			result->next = l2;
//		}
//		if (l1 != NULL)
//		{
//			result->next = l1;
//		}
//		return ooo;
//	}
//};
//int main()
//{
//	Solution s1;
//	ListNode *o = new ListNode(1);
//	ListNode *t = new ListNode(2);
//	ListNode *th = new ListNode(3);
//
//	ListNode *f = new ListNode(4);
//	ListNode *fi = new ListNode(5);
//	ListNode *s = new ListNode(6);
//	o->next = t;
//	t->next = th;
//
//	f->next = fi;
//	fi->next = s;
//	ListNode *result = s1.mergeTwoLists(o, f);
//	while (result)
//	{
//		std::cout << result->val << std::endl;
//		result = result->next;
//	}
//	system("pause");
//}