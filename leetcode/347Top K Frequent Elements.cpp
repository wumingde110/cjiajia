//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	struct comparatorLess {
//		bool operator()(pair<int, int> &a, pair<int, int> &b) {
//			return a.second > b.second;
//		}
//	};
//	std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
//		//��һ���뷨��ÿ�εõ���ǰ������ظ������������֡�Ȼ��������м�ȥ������֡�
//		//����ʵ�ʲ�����ʱ�����ˣ�1.�ȶԵ�ǰ�������� 2.��ÿ��Ԫ�ص��ظ�ֵ������һ������
//		//3.����ѡ������ظ�ֵ������ֵ������Ӧ�Ĵ�����󷵻ص����顣
//		//   -1��-1��-1��0��0��3
//		//    0��0��3��0��2��1
//		//    0��1��2��3��4��5
//		//    ��Ϊ3������ֵ�����ǽ���Ӧ���е�2���ҵ�ԭʼ���飬ȡ����Ӧ2��ֵ������������
//		/*std::sort(nums.begin(), nums.end());
//		int butong = nums[0];
//		int jishu = 1;
//		bool istrue = true;
//		std::vector<int> result(nums.size(), 0);
//		std::vector<int> zresult(k, 0);
//			for (int i = 1; i < nums.size(); i++)
//			{
//				istrue = false;
//				if (butong != nums[i])
//				{
//					result[i - 1] = jishu;
//					butong = nums[i];
//					jishu = 1;
//				}
//				else
//				{
//					jishu++;
//				}
//				if (i == nums.size() - 1)
//				{
//					result[i] = jishu;
//				}
//			}
//			if(istrue)
//			{
//				result[0] = nums[0];
//			}
//			for (int i = 0; i < k; i++)
//			{
//				int max = result[0];
//				int wei = 0;
//				for (int j = 1; j < result.size(); j++)
//				{
//					if (max < result[j])
//					{
//						max = result[j];
//						wei = j;
//					}
//				}
//				result[wei] = 0;
//				zresult[i] = nums[wei];
//			}
//		return zresult;*/
//		
//
//	
//			unordered_map<int, int> hMap;
//
//			// �ȶ�����һ��map��Ȼ�������ڵ�ֵ���룬��ֱ�Ӹ��ݴ�����������
//			for (int i = 0; i<nums.size(); i++) {
//				if (hMap.find(nums[i]) == hMap.end())
//					hMap[nums[i]] = 1;
//				else
//					hMap[nums[i]] += 1;
//			}
//
//
//			// create a min Heap of size k
//			priority_queue<pair<int, int>, vector<pair<int, int>>, comparatorLess> minHeap;
//
//			for (unordered_map<int, int>::iterator it = hMap.begin(); it != hMap.end(); it++) {
//				if (minHeap.size() < k)
//					minHeap.push(make_pair(it->first, it->second));
//				else {
//					pair<int, int> top = minHeap.top();
//					if (it->second > top.second) {
//						minHeap.pop();
//						minHeap.push(make_pair(it->first, it->second));
//					}
//				}
//			}
//
//			vector<int> result;
//			while (minHeap.size() != 0) {
//				pair<int, int> top = minHeap.top();
//				minHeap.pop();
//				result.push_back(top.first);
//			}
//
//			return result;
//	}
//};
//int main()
//{
//	Solution s;
//	int a[] = { -1,0,-1,0,-1,3 };
//	/*int a[] = { 1,1,1,2,2,3 };*/
//	/*int a[] = { 1};*/
//	std::vector<int> sh(a,a+6);
//	std::vector<int> result=s.topKFrequent(sh,2);
//	system("pause");
//}