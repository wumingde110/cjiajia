//#include <iostream>
//#include <vector>
//class Solution {
//public:
//	int er(std::vector<int>& nums, int begin, int end, int target)
//	{
//		int reslult;
//		if (begin == end - 1)
//		{
//			if (nums[begin] == target)
//			{
//				return begin;
//			}
//			else if (nums[end] == target)
//			{
//				return end;
//			}
//			else if(nums[begin]<target&&nums[end]>target)
//			{
//				return end;
//			}
//			else return -1;
//		}
//		if (begin == end)
//		{
//			if (nums[begin] == target)
//			{
//				return begin;
//			}
//			else return -1;
//		}
//		int result;
//		int left;
//		int right;
//		int middle = (begin + end) / 2;
//		if (nums[middle]<target&&nums[middle+1]>target)
//		{
//			return middle + 1;
//		}
//		left = er(nums, begin, middle, target);
//		right = er(nums, middle + 1, end, target);
//		result = left > right ?left :right ;
//		return result;
//	}
//	int searchInsert(std::vector<int>& nums, int target) {
//		//我决定用二分查找
//		if (target < nums[0])
//		{
//			return 0;
//		}
//		if (target > nums[nums.size()-1])
//		{
//			return nums.size();
//		}
//		return er(nums, 0, nums.size() - 1, target);
//	}
//};
//int main()
//{
//	//int a = 5;
//	//int a = 2;
//	//int a = 7;
//	int a = 0;
//	std::vector<int> one = { 1,3,5,6 };//5,2,7,0;
//	//std::vector<int> one = {1,3,5,6};
//	//std::vector<int> one = {1,3,5,6};
//	//std::vector<int> one = {1,3,5,6};
//	Solution s;
//	std::cout << s.searchInsert(one, a);
//	//std::cout << one.size() - 1<<std::endl;
//	system("pause");
//}