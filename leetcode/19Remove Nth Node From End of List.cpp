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
//		//这个题由于不知道链表的大小，所以没有办法随机的访问节点
//		//所以就要一个一个的过去，所以我设置了一个数组存放每一个节点的地址
//		//然后根据n的大小，对数据内的元素直接进行修改。
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
