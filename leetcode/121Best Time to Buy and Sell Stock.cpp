//#include <iostream>
//#include <vector>
//#include <stack>
//std::stack<int> one;
//int result;
//int max = 0;
//for (int i = 0; i < prices.size() - 1; i++)
//{
//	if (one.size() == 0 || prices[i] > prices[one.top()])
//	{
//		if (one.size() != 0)
//		{
//			one.pop();
//		}
//		one.push(i);
//	}
//	else
//	{
//		int x = one.top();
//		one.pop();
//		int y;
//		if (one.size() != 0)
//		{
//			y = one.top();
//		}
//		else y = 0;
//		max = max > (prices[x] - prices[y]) ? max : (prices[x] - prices[y]);
//		i--;
//	}
//}
//int end = one.top();
//one.pop();
//while (one.size() != 1)
//{
//	one.pop();
//}
//int begin = one.top();
//return end - begin;
//class Solution {
//public:
//	int maxProfit(std::vector<int>& prices) {
//		if (prices.size() == 0)return 0;
//		int minprices = INT_MAX; int maxpro = INT_MIN;
//		for (int i = 0; i < prices.size(); i++)
//		{
//			minprices = minprices < prices[i] ?minprices :prices[i] ;
//			maxpro = maxpro > (prices[i] - minprices) ?maxpro:(prices[i]-minprices) ;
//		}
//		return maxpro;
//	}
//};
//int  main()
//{
//	std::vector<int> one = { 7,1,5,3,6,4 };
//	//std::vector<int> one = {};
//	//std::vector<int> one = {};
//	Solution s;
//	std::cout << s.maxProfit(one);
//	system("pause");
//}