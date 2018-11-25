//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
////#include <hash>
//class Solution {
//public:
//	int ffff(std::vector<char> s,char mm)
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == mm)
//			{
//				return i;
//			}
//		}
//	}
//	int lengthOfLongestSubstring(std::string s) {
//		if (s.size() == 1) return 1;
//		std::vector<char> sss;
//		int maxsize = 0;
//		
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (std::find(sss.begin(), sss.end(), s[i]) == sss.end()||sss.size() == 0)
//			{
//				std::cout << "push" << std::endl;
//				sss.push_back(s[i]);
//				for (auto a : sss)
//				{
//					std::cout << a << "  ";
//				}
//				std::cout << std::endl;
//			}
//			else
//			{
//				
//				int xxxxx=ffff(sss, s[i]);
//				if (xxxxx == (sss.size() - 1))
//				{
//					maxsize = maxsize > sss.size() ? maxsize : sss.size();
//					std::cout<<"one" << s[i] << "  " << i << std::endl;
//					sss.clear();
//					sss.push_back(s[i]);
//				}
//				else
//				{
//					maxsize = maxsize > sss.size() ? maxsize : sss.size();
//					
//					 sss.assign(sss.begin()+xxxxx+1,sss.end());
//					 sss.push_back(s[i]);
//					 std::cout << "two" << s[i] << "   " << i <<std::endl;
//					 for (auto a : sss)
//					 {
//						 std::cout << a <<"  ";
//					 }
//					 std::cout<<std::endl;
//				}
//				std::cout << maxsize << std::endl;
//			}
//		}
//	maxsize = maxsize > sss.size() ? maxsize : sss.size();
//	return maxsize;
//	}
//};
//int main()
//{
//	//std::string  s = "abcabcbb";
//	//std::string s="pwwkew";
//	//std::string s = "au";
//	std::string s = "aabaab!bb";
//	Solution so;
//	std::cout << so.lengthOfLongestSubstring(s)<<"fadfadfadfadfadfadfadfa" << std::endl;;
//	system("pause");
//}