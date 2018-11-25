#include <iostream>
#include <vector>
//第一种想法是一种错误的想法，要去找规律，不要直接看例子进行求解
/*int left, right;
left = 0, right = 0;
bool isfirst = true;
if (nums.size() == 1)
{
	return 0;
}
if (nums[0] > nums[1])
{
	left = 0;
	isfirst = false;
}
for (int i = 1; i <= nums.size() - 2; i++)
{
	int r, l;
	r = i + 1;
	l = i - 1;
	if (nums[i] > nums[r] || nums[i] < nums[l] || (nums[i] == nums[l] && left != 0))
	{
		if (isfirst)
		{

			left = i;
			isfirst = false;

		}
		else
		{
			right = i;

		}
	}
}
if (nums[nums.size() - 1] < nums[nums.size() - 2] || (nums[nums.size() - 1] <= nums[nums.size() - 2] && left != 0))
	right = nums.size() - 1;
if (right == left)
return 0;
else return right - left + 1; */
//class Solution {
//public:
//	int findUnsortedSubarray(std::vector<int>& nums) {
//		if (nums.size() == 1)return 0;
//		int left=0, right=nums.size()-1;
//		while (left <= nums.size() - 2 && nums[left] <= nums[left + 1])left++;
//		if (left == nums.size() - 1) return 0;
//		while (right >= 0 && nums[right] >= nums[right - 1]) right--;
//		int rmin = INT_MAX, lmax = INT_MIN;
//		for (int i = left; i <= right; ++i) {
//			if (nums[i] > lmax) lmax = nums[i];
//			if (nums[i] < rmin) rmin = nums[i];
//		}
//		while (left >= 0 && nums[left] > rmin)--left;
//		while (right < nums.size() && nums[right] < lmax)right++;
//		return right - left - 1;
//	}
//};
//int main()
//{
//	/*std::vector<int> one = { 2, 6, 4, 8, 10, 9, 15 };*/
//	//std::vector<int> one = { 2,1};
//	//std::vector<int> one = { 1,3,2,2,2};
//	std::vector<int> one = { 4,8,9,2 };
//	Solution s;
//	std::cout << s.findUnsortedSubarray(one)<<std::endl;
//	system("pause");
//}