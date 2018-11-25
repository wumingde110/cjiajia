//#include <vector>
//#include <iostream>
/*if (nums[i] == 0)
{
sum = 0;
maxsum = maxsum > sum ? maxsum : sum;
sum = 1;
}
else
{
sum = sum * nums[i];
maxsum = maxsum > sum ? maxsum : sum;
maxsum = maxsum > nums[i] ? maxsum : nums[i];
}*/
//class Solution {
//public:
//	int maxProduct(std::vector<int>& nums) {
//		int maxsum ;
//		int minsum ;
//		int premax = nums[0];
//		int premin = nums[0];
//		int max = nums[0];
//		for (int i = 1; i < nums.size(); i++)
//		{
//			maxsum = premax * nums[i] > premin*nums[i] ?premax*nums[i] :premin*nums[i] ;
//			maxsum = maxsum > nums[i] ? maxsum:nums[i] ;
//			//std::cout << maxsum << std::endl;
//			minsum = premax * nums[i] < premin*nums[i] ? premax * nums[i] : premin * nums[i];
//			//std::cout<<" dfdfadfd" << minsum << std::endl;
//			minsum = minsum < nums[i] ? minsum : nums[i];
//			//std::cout << minsum << std::endl;
//			premax = maxsum;
//			premin = minsum;
//			max = maxsum>max?maxsum:max;
//			
//			
//		}
//		return max;
//	}
//};
//int main()
//{
//	//std::vector<int> one = { 2,3, - 2,4 };
//	//std::vector<int> one = { -2,0,-1 };
//	std::vector<int> one = { -4, -3, -2 };
//	Solution s;
//	std::cout << s.maxProduct(one) << std::endl;
//	system("pause");
//
//}