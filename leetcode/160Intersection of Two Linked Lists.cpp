//#include <iostream>
//#include <vector>
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//	ListNode * getIntersectionNode(ListNode *headA, ListNode *headB) {
//		ListNode *one=headA;
//		ListNode *two=headB;
//		while (one != two)
//		{
//			one = one==NULL?headB:one->next;
//			two = two==NULL?headA:two->next;
//		}
//		return one;
//	}
//};