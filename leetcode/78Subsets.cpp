//#include <vector>
//#include <iostream>
//class Solution {
//public:
//	void p( std::vector<std::vector<int>> &result,int x)
//	{
//		int length = result.size();
//		for (int i = 0; i <length; i++)
//		{
//			std::vector<int> o;
//			o = result[i];
//			o.push_back(x);
//			result.push_back(o);
//		}
//	}
//
//	std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
//		std::vector<std::vector<int>> result;
//		std::vector<int> now;
//		result.push_back(now);
//		now.push_back(nums[0]);
//		result.push_back(now);
//		for (int j = 1; j < nums.size(); j++)
//		{
//			p(result,nums[j]);
//		}
//		return result;
//		
//	}
//};
//int main()
//{
//	std::vector<int> now = { 1,2,3 };
//	std::vector<std::vector<int>>result;
//	Solution s;
//	result=s.subsets(now);
//	for (auto &o : result)
//	{
//		for (auto t : o)
//		{
//			std::cout << t << " ";
//		}
//		std::cout << std::endl;
//	}
//	system("pause");
//}
/*std::vector<std::vector<int>> result;
std::vector<int> now;
result.push_back(now);
for (int i = 0; i <= nums.size()-1; i++)
{
std::vector<int> now;
for (int r = i; r <= nums.size() - 1; r++)
{
now.assign(nums.begin() + i, nums.begin() + r + 1);
result.push_back(now);
}
}

return result;*/