//#include <vector>
//#include <iostream>
//class Solution {
//public:
	//���ȿ������ڵ�1.������Ƿ����0����������㣬����֮ǰ�ĺ��Ƿ����0���������0��
	//ʲô��������ֱ�Ӿͼ��ϾͿ��ԣ����С���㣬��˵��֮ǰ���Ӵ�����������Ҫ���Ӵ�
	//2.������ڵ������С���㣬��Ҫ�����ִ��Ƿ�С��0�����С��0���Ƚ��������Ĵ�С
	//����ִ���������ô�ͼ��������
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

	//2.�����������ǽ�������δ��������������ζ�С�Ĵ���
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
	//�����������÷��η�˼�������������⣬
	/*int maxSubArray(std::vector<int>& nums) {*/
		//��Ҫ˼�������ʹ�÷��η�����ô����ִ�Ҫô��������࣬Ҫô�������Ҳ࣬
		//Ҫô����������������Ҳ�Ϊ�߽�+�Ҳ����������Ϊ�߽硣

		
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