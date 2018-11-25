//#include<vector>
//#include<iostream>
//class Solution {
//public:
	//思路运用循环，找出连续的值小于等于目标值，一旦大于目标值就进入下一个。
	/*int subarraySum(std::vector<int>& nums, int k) {
		int cishu = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			int sum = nums[i];
			if (sum == k)
			{
				cishu++;
				for (int j = i + 1; j < nums.size(); j++)
				{
					sum += nums[j];
					if (sum == k)
					{
						cishu++;
					}
				}
			}
			else
			{
				for (int j = i + 1; j < nums.size(); j++)
				{
					sum += nums[j];
					if (sum == k)
					{
						cishu++;
					}
				}
			}
		}
		return cishu;
	}*/
	//第二种带记录的循环。
	//std::unordered_map<int, int> hmap; // k -> number of prefix that sums to k
	//hmap[0] = 1; // empty string "" sum is 0
	//int sum = 0;
	//int res = 0;
	//for (int i = 0; i < nums.size(); i++) {
	//	sum += nums[i];
	//	if (hmap.find(sum - k) != hmap.end())
	//		res += hmap.at(sum - k);
	//	hmap[sum]++;
	//}
	//return res;

	
//	}
//};
//int main()
//{
//	Solution s;
//	/*int a[] = { 28, 54, 7, - 70, 22, 65, - 6 };*/
//	/*int a[] = { 1,1,1 };*/
//	//int a[] = { 1,2,3 };
//	int a[] = { -19,-82, -70, -46, -29, 7, 15,-72, -7, 100, 303 };
//	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 1, 23, 21, 3, 1, 2, 1, 1, 1, 1, 1, 12, 2, 3, 2, 3, 2, 2 };
//	std::vector<int> sss(a,a+11);
//	int result=s.subarraySum(sss,100);
//	std::cout << result << std::endl;
//	system("pause");
//	
//}