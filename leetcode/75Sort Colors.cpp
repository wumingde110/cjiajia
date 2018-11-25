//#include <iostream>
//#include <vector>
//这种方法非常sb,实际就是对这个nums进行排序，排序就好了，不用那些花里胡哨的
/*int left = 0;
int right = nums.size() - 1;
while(true)
{
while (nums[left] !=2 && left<nums.size()-1)
{
left++;
}
while (nums[right] != 1 && right >= 0)
right--;
if (left >= right)
{
break;
}
else
{
int temp = nums[left];
nums[left] = nums[right];
nums[right] = temp;

}
}
for (auto one : nums)
{
std::cout << one << std::endl;
}
left = 0; right = nums.size()-1;
while (true)
{
while (nums[left] != 1 && left <nums.size() - 1)
left++;
while (nums[right] !=0 && right >= 0)
right--;
if (left >= right)
{
break;
}
else
{
int temp = nums[left];
nums[left] = nums[right];
nums[right] = temp;

}
}
left = 0; right = nums.size() - 1;
while (true)
{
while (nums[left] != 2 && left<nums.size() - 1)
{
left++;
}
while (nums[right] != 1 && right >= 0)
right--;
if (left >= right)
{
break;
}
else
{
int temp = nums[left];
nums[left] = nums[right];
nums[right] = temp;

}
}
for (auto one : nums)
{
std::cout << one << std::endl;
}*/
//排序算法也是有点蠢，看了别人的思路，有了一种新的想法
/*for (int i = 0; i < nums.size() - 1; i++)
{
int min = nums[i];
int temp = i;
for (int j = i + 1; j <= nums.size() - 1; j++)
{
if (min >= nums[j])
{
min = nums[j];
temp = j;
}
}
nums[temp] = nums[i];
nums[i] = min;

}*/
//class Solution {
//public:
//	void sortColors(std::vector<int>& nums) {
//		int i, j, k;
//		k = nums.size()-1;
//		j = 0;
//		for ( i = 0; i <=k; i++)
//		{
//			if (nums[i] == 0)
//			{
//				int temp = nums[j];
//				nums[j] = nums[i];
//				nums[i] = temp;
//				j++;
//			}
//			else if (nums[i] == 2)
//			{
//				int temp = nums[k];
//				nums[k] = nums[i];
//				nums[i] = temp;
//				k--;
//				i--;
//			}
//		}
//		for (auto one : nums)
//		{
//			std::cout << one << std::endl;
//		}
//	}
//};
//int main()
//{
//	std::vector<int> a = { 2,0,2,1,1,0 };
//	Solution s;
//	std::cout <<( a[0] != 2) << std::endl;
//	s.sortColors(a);
//	system("pause");
//	
//}