//#include <vector>
//#include <iostream>
//#include <algorithm>
//����˼��û�п��ǵ�������������
/*std::vector<int> result(100000, 0);
for (int i = 0; i < nums.size(); i++)
{
result[nums[i]]++;
}
int max;
for (int i = 0; i < result.size()-2; i++)
{
if (result[i] > result[i + 1])
{
max = i;
}
}
return max;*/
//����˼������Ƚ���������Ȼ��Ƚ����ڵ������������ǻ����������ˣ��ȽϷ�ʱ��
/*sort(nums.begin(), nums.end());
int left = 0;
int max = 0;
int value=nums[0];
for (int i = 0; i<= nums.size()-2; i++)
{
if (nums[i] != nums[i + 1])
{

if (max < (i - left + 1))
{
max = i - left + 1;
value = nums[i];
}
left = i + 1;

}
if (i == nums.size() - 2)
{
if (max < (i+1 - left + 1))
{
max = i - left + 1;
value = nums[i];
}
left = i + 1;
}
}
return value;*/
//class Solution {
//public:
//	int majorityElement(std::vector<int>& nums) {
//		int value = 0, count = 0;
//		for (int i = 0; i < nums.size() - 1; i++)
//		{
//			if (value != nums[i]) count--;
//			else if (count == 0) value = nums[i];
//			else count++;
//		}
//	}
//};
//int main()
//{
//	std::vector<int> one = { 2,2,1,1,1,2,2 };
//	Solution s;
//	std::cout << s.majorityElement(one) << std::endl;
//	system("pause");
//}