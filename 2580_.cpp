//#include<iostream>
//#include<vector>
//using namespace std;
//
//int arr[9][9];
//vector<pair<int, int>> vec;
//
//bool isCheck(int r, int c, int num)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		if (arr[i][r] == num)
//		{
//			return false;
//		}
//	}
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (arr[c][i] == num)
//		{
//			return false;
//		}
//	}
//
//	r = r / 3;
//	c = c / 3;
//
//	for(int cc = c * 3; cc < (c * 3) + 3; cc++)
//	{
//		for (int rr = r * 3; rr < (r * 3) + 3; rr++)
//		{
//			if (arr[cc][rr] == num)
//			{
//				return false;
//			}
//		}
//	}
//
//	return true;
//}
//void Stoku(int index)
//{
//	if (index == vec.size())
//	{
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				cout << arr[i][j] << ' ';
//			}
//			cout << '\n';
//		}
//		exit(0);
//	}
//
//	for (int i = 1; i <= 9; i++)
//	{
//		int x = vec[i].first;
//		int y = vec[i].second;
//
//		if (isCheck(x, y, i))
//		{
//			arr[x][y] = i;
//			Stoku(index + 1);
//			arr[x][y] = 0;
//		}
//	}
//}
//
//int main(void)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			int temp;
//			cin >> temp;
//
//			arr[i][j] = temp;
//			if (temp == 0)
//			{
//				vec.push_back(make_pair(i, j));
//			}
//		}
//	}
//
//	Stoku(0);
//	return 0;
//}