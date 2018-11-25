//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//class Solution {
//
//public:
//	/*std::vector<std::string> zhao(std::vector<std::string>&strs,int i)
//	{
//		std::vector<std::string> mm;
//		mm.push_back(strs[i]);
//		int length = strs[i].length();
//		char x = strs[i][length-1];
//		strs.erase(strs.begin());
//		for (auto a : strs)
//		{
//			std::cout << a << " ";
//		}
//		std::cout << std::endl;
//		for (int j = 0; j < strs.size(); j++)
//		{
//			if (strs[j][0] == x)
//			{
//				std::cout << j << std::endl;
//				std::vector<std::string> now=zhao(strs, j);
//				mm.insert(mm.end(),now.begin(),now.end());
//			}
//		}
//		return mm;
//	}*/
//	std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
//		std::vector<std::vector<std::string>> result;
//		/*while (strs.size() != 0)
//		{
//			std::vector<std::string> mm = zhao(strs,0);
//
//			result.push_back(mm);
//		}
//		*/
//		std::unordered_map<std::string, std::vector<std::string>> count;
//		int i = 0;
//		for (auto s : strs)
//		{
//			sort(s.begin(), s.end());
//			count[s].push_back(strs[i++]);
//		}
//		for (auto o : count)
//		{
//			result.push_back(o.second);
//		}
//		return result;
//	}
//};
//int main()
//{
//	/*std::vector<int> ss = { 1,2,3,4,5,6 };
//	for (auto o : ss)
//	{
//		std::cout << o << " ";
//	}
//	std::cout << std::endl;
//	ss.erase(ss.begin());
//	for (auto o : ss)
//	{
//		std::cout << o << " ";
//	}*/
//	std::vector < std::string > one= {"eat", "tea", "tan", "ate", "nat", "bat"};
//	Solution s;
//	std::vector<std::vector<std::string>> result=s.groupAnagrams(one);
//	for (auto &o : result)
//	{
//		for (auto t : o)
//		{
//			std::cout << t << " ";
//		}
//		std::cout<<std::endl;
//	}
//	
//	system("pause");
//}