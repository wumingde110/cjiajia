//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//class Solution {
//public:
//	int singleNumber(std::vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i < nums.size()-1; i++)
//		{
//			if (i == nums.size() - 1)
//			{
//				return nums[i];
//			}
//			if (nums[i] != nums[i + 1])
//			{
//				return nums[i];
//			}
//			else
//			{
//				i++;
//			}
//
//		}
//		//return nums[nums.size() - 1];
//	}
//};
//int main()
//{
//	std::vector<int> o = { 4,1,2,1,2};
//	Solution s;
//	std::cout << s.singleNumber(o) << std::endl;
//	system("pause");
//}