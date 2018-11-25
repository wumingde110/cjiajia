//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//class Solution {
	//不要额外空间，时间复杂读为n;
//public:
//	std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
		//sort(nums.begin(), nums.end());//排序找出最大值，防止出现类似{1，9}的时候出错
		//int max = nums[nums.size()-1];
		//std::vector<int> temp(max,0);
		//std::vector<int> result;
		//for (auto o : nums)
		//	++temp[o-1];
		//for (int i = 0; i < max; i++)
		//{
		//	if (temp[i] == 0)
		//	{
		//		result.push_back(i + 1);
		//	}
		//}
		//return result;

//		int length = nums.size();
//		sort(nums.begin(), nums.end());
//		int max = nums[nums.size() - 1];
//		if (max > nums.size())
//		{
//			for (int i = nums.size(); i < max; i++);
//			nums.push_back(0);
//		}
//		for(int i=0;i<length;i++)
//		{
//			int n = abs(nums[i] )- 1;
//			nums[n] = nums[n] > 0 ? -nums[n]:nums[n] ;
//		}
//		std::vector<int> result;
//		for (int i = 0; i < length; i++)
//		{
//			if (nums[i] >= 0)
//			{
//				result.push_back(i+1);
//			}
//		}
//		return result;
//		
//
//	}
//};
//int main()
//{
	
	//std::vector < int> hah = { 9,8,7,6,5,4,2,2,1,1 };
	//std::vector<int > hah = { 4,3,2,7,9,2,3,1 };
	//std::vector<int > hah = { 9,1 };
	/*for(auto o:hah)
	{
		std::cout << o << std::endl;
	}
	std::cout << std::endl;
	Solution s;
	std::vector<int> result = s.findDisappearedNumbers(hah);
	for (auto o : result)
	{
		std::cout << o << std::endl;
	}*/
//	system("pause");
//}