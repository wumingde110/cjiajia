//#include <iostream>
//#include <vector>
//#include <map>
//class Solution {
//public:
//	std::vector<int> twoSum(std::vector<int>& nums, int target) {
//		std::map<int, int> m;
//		std::vector<int> o;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (m.find(target - nums[i]) != m.end())
//			{
//				o.push_back(m[target-nums[i]]);
//				o.push_back(i);
//				return o;
//			}
//			m[nums[i]]= i;
//		}
//		std::vector<int> o;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			for (int j = i + 1; j < nums.size(); j++)
//			{
//				if (nums[i] + nums[j] == target)
//				{
//					o.push_back(i);
//					o.push_back(j);
//					return o;
//				}
//			}
//		}
//	}
//};
//int main()
//{
//	system("pause");
//}