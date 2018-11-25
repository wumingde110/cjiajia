//#include <iostream>
//#include <vector>
//#include <algorithm>
//暴力破解法，三个for循环，不会删除二维数组中的元素了。。。
/*std::vector<std::vector<int>>result;
int a = 0;
for (int i = 0; i <= nums.size()-3; i++)
{
for (int j = i + 1; j <= nums.size()-2; j++)
{
for (int k = j + 1; k <= nums.size()-1; k++)
{
if (nums[i] + nums[j] + nums[k] == 0 && nums[i] != nums[j])
{
int x, y, z;
x = nums[i];
y = nums[j];
z = nums[k];
std::vector<int> xx;
xx.push_back(x);
xx.push_back(y);
xx.push_back(z);
result.push_back(xx);
}
}
}
}
for (int i = 0; i < result.size(); i++)
{
sort(result[i].begin(), result[i].end());
}
sort(result.begin(), result.end());
std::vector<int>::iterator be= result.begin();
auto be = result.begin();
for (int i = 0; i < result.size()-1; i++)
{
if (result[i][0] == result[i + 1][0] && result[i][1] == result[i + 1][1] && result[i][2] == result[i + 1][2])
{
result.erase();
}
}

return result;*/
//class Solution {
//public:
//	std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
//		std::vector<std::vector<int> > result;
//		if (nums.size() <= 2)
//			return result;
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i < nums.size() - 2; i++)
//		{
//			int sum = 0-nums[i];
//			std::vector<int> now;
//			
//			for (int j = i+1, k = nums.size() - 1;j<k;)
//			{
//				if (nums[j] + nums[k] == sum)
//				{
//					now.push_back(nums[i]);
//					now.push_back(nums[j++]);
//					now.push_back(nums[k--]);
//					result.push_back(now);
//					now.clear();
//					while (j < k&&nums[j] == nums[j -1])
//						j++;
//					while (j<k && nums[k] == nums[k +1])
//						k--;
//				}
//				else if (nums[j] + nums[k] < sum)
//				{
//					j++;
//				}
//				else if (nums[j] + nums[k] > sum)
//				{
//					k--;
//				}
//				
//
//			}
//			while (i < nums.size()-2 && nums[i + 1] == nums[i])
//				i++;
//		}
//		return result;
//	}
//};
//int main()
//{
//	//std::vector<int> a = { -1,0,1,2,-1,-4 };
//	std::vector<int> a = { };
//	Solution s;
//	std::vector<std::vector<int>> result =s.threeSum(a);
//	for (auto &o : result)
//	{
//		for (auto t : o)
//		{
//			std::cout << t << " ";
//		}
//		std::cout << std::endl;
//	}
//	
//	system("pause");
//}