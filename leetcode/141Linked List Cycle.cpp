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
//		 //第一种想法：因为是找出是否存在一个环，要形成一个环，必然有一个节点的下一个节点是一个出现过
//		//的节点。所以，第一个想法是，循环，看是否有节点曾经出现过。
//		//第二种方法是Floyd判圈发（Floyd Cycle Detection Algorithm）又称归途赛跑算法，是一个可以在优先状态
//		//机，迭代函数或者链表上判断是否存在环，求出该环的起点与长度的算法。
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