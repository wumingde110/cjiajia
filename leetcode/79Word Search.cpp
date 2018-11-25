//#include <iostream>
//#include <vector>
//#include <string>
//class Solution {
//public:
//	bool exist(std::vector<std::vector<char>>& board, std::string word) {
//		m = board.size();
//		n = board[0].size();
//		for (int i = 0; i <m; i++)
//			for (int j = 0; j <n; j++)
//			{
//
//				if (zhao(board, word.c_str(), i, j))
//					return true;
//
//			}
//		return false;
//	}
//private:
//	int m;
//	int n;
//	bool zhao(std::vector<std::vector<char>> &board, const char* w, int x, int y)
//	{
//		if (x<0 || y<0 || x >= m || y >= n || board[x][y] == '\0' || *w != board[x][y])
//			return false;
//		if (*(w + 1) == '\0')
//			return true;
//		char t = board[x][y];
//		board[x][y] = '\0';
//		if (zhao(board, w + 1, x - 1, y) || zhao(board, w + 1, x + 1, y) || zhao(board, w + 1, x, y - 1) || zhao(board, w + 1, x, y + 1))
//			return true;
//		board[x][y] = t;
//		return false;
//	}
//
//};
//int main()
//{
//	//std::vector<char> one = { 'A','B','C','E' };
//	std::vector < std::vector<char> > board = {{ 'A','B','C','E' },{'S','F','C','S'},{'A','D','E','E'} };
//	//std::vector < std::vector<char> > board = { {'a','b' },{'c','d'} };
//	std::string a = "ABCCED";
//	std::string b = "SEE";
//	std::string c = "ABCD";	
//	std::string d = "ab";
//	std::string e = "abcd";
//	/*std::string a= "1";
//	std::string now = a.substr(1);*/
//	Solution s;
//	if (s.exist(board, a))
//	{
//		std::cout << "true" << std::endl;
//	}
//	else
//	{
//		std::cout << "false" << std::endl;
//	}
//	//std::cout << now.length() << std::endl;
//	system("pause");
//}


//定义上下左右四个方向，如果有大于一个的方向都符合下一个，则在这个基础上
////再进行搜索
////top(x,y+1),bottom(x,y-1),left(x-1,y),right(x+1,y)
////上的只有左右上，下的只有左右下，左的只有左上下，右的只有又上下。
////当上的达到y==0,下的达到y==board.size()-1,左的达到x==0,右的达到x==board[0].size()-1;
//if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size()||board[x][y]!=word[0]|| board[x][y] == '\0')
//return false;
//std::cout << word << std::endl;
//std::cout << x << y << std::endl;
//if (word.length() == 1)
//{
//	//std::cout<<"==0"<<std::endl;
//	return true;
//}
//int top, bottom, left, right;
//bool t = false, b = false, l = false, r = false;
//char nn = board[x][y];
//board[x][y] = '0';
//for (auto &o : board)
//{
//	for (auto t : o)
//	{
//		std::cout << t << " ";
//	}
//	std::cout << std::endl;
//}
//std::string now;
//now = word.substr(1);
///*std::cout << word << std::endl;
//std::cout<<now << std::endl;*/
///*std::cout << "上  "<<(board[x-1][y]== now[0] )<< std::endl;
//std::cout << "下  " << (board[x+1][y]== now[0]) << std::endl;
//std::cout << "左  " << (board[x][y-1]== now[0] )<< std::endl;
//std::cout << "右  " << (board[x][y+1]== now[0] )<< std::endl;*/
//if (zhao(board, now, x - 1, y) || zhao(board, now, x, y + 1) || zhao(board, now, x + 1, y) || zhao(board, now, x, y - 1))
//	return true;
//board[x][y] = nn;
////if ((x - 1) >= 0 && board[x-1][y] == word[0])
////{
////	//string 字符串进行到下一个
////	std::cout << board[x][y] << "上" <<x<<y<< std::endl;
////	t = zhao(board,now,x-1,y);
////}
////if ( (y + 1) <= board[0].size() - 1 && board[x ][y+1] == word[0])
////{
////	std::cout << board[x][y] << "右" << x << y << std::endl;
////	r = zhao(board, now, x, y+1);
////}
////if ((x + 1) <= board.size() - 1 && board[x+1][y] == word[0])
////{
////	std::cout << board[x][y] << "下" << x << y << std::endl;
////	b = zhao(board,now,x+1,y);
////}
////if ( (y - 1) >= 0 && board[x][y-1] == word[0])
////{
////	std::cout << board[x][y] << "左" << x << y << std::endl;
////	l = zhao(board,now,x,y-1);
////}
///*std::cout << t << std::endl;
//std::cout << b << std::endl;
//std::cout << l << std::endl;
//std::cout << r << std::endl;*/
////if (t || b || l || r)
////{
////	//std::cout << "有一个对" << std::endl;
////	return true;
////}
////else{
////	return false;
////}