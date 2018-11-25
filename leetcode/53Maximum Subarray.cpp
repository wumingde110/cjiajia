//#include <vector>
//#include <iostream>
//class Solution {
//public:
	//首先考虑现在的1.这个数是否大于0，如果大于零，看看之前的和是否大于0，如果大于0，
	//什么都不用想直接就加上就可以，如果小于零，那说明之前的子串不是我们需要的子串
	//2.如果现在的这个数小于零，还要看看字串是否小于0，如果小于0，比较两个数的大小
	//如果字串大于零那么就加上这个数
	/*int sum = nums[0];
	int maxsum = sum;
	for (int i = 1; i < nums.size(); i++)
	{*/
	/*	if (nums[i] > 0)
	{

	if (sum > 0)
	{
	sum = sum + nums[i];
	}
	else
	{
	sum = nums[i];
	}
	}
	else
	{
	if (sum < 0)
	{
	sum = sum > nums[i] ? sum : nums[i];
	}
	else
	{
	sum = (sum + nums[i]);
	}

	}
	maxsum = maxsum > sum ? maxsum : sum;*/
//}

	//2.经过整理我们将上面这段代码整理成下面这段短小的代码
	/*int sum = nums[0];
	int maxsum = sum;
	for (int i = 1; i < nums.size(); i++)
	{
		if (sum > 0)
		{
			sum += nums[i];
		}
		else
		{
			sum = sum > nums[i] ? sum : nums[i];
		}
		maxsum = maxsum > sum ? maxsum : sum;

	} return maxsum*/
	//接下来我们用分治法思想来解决这个问题，
	/*int maxSubArray(std::vector<int>& nums) {*/
		//主要思想是如果使用分治法，那么最大字串要么存在于左侧，要么存在于右侧，
		//要么存在于左侧数组以右侧为边界+右侧数组以左侧为边界。

		
//	}
//};
//int main()
//{
	/*std::vector<int> one = { -2,1,-3,4,-1,2,1,-5,4 };*/
	/*std::vector<int> one = { -2,1,3,4,-1,2,1,-5,7 };*/
	/*std::vector<int> one = { -2,-1 };
	Solution s;
	std::cout << s.maxSubArray(one) << std::endl;
	system("pause");
}*/