#include <bits/stdc++.h>
using namespace std;
string fuc()
{
	int k;
	char ch;
	string temp = "",ans = "";
	while((ch = getchar()) != '\n')
	{
		if(ch == '[')
		{
			cin>>k;
			temp = fuc();
			while(k--)
			{
				ans += temp;
			}
		}
		else if(ch == ']')
		{
			return ans;
		}
		else
		{
			ans += ch;
		}
	}
	return ans;
}
int main()
{
	cout<<fuc();
	return 0;
}

//以下代码为按照我自己的思路写的，结果测试正确，但是只能拿到一半的分数 。 
//#include <bits/stdc++.h>
//using namespace std;
//string fuc()
//{
//	int k;
//	char a;
//	string ans = "",temp = "";
//	cin>>k;
//	while(a = getchar())
//	{
//		if(a == '[')
//		{
//			temp = fuc();
//		}
//		else if(a == ']')
//		{
//			break;
//		}
//		else
//		{
//			temp += a;
//		}
//	}
//	while(k--)
//	{
//		ans += temp;
//	}
//	return ans;
//}
//int main()
//{
//	char a;
//	string ans = "";
//	while((a = getchar()) != '\n')
//	{
//		if(a == '[')
//		{
//			ans += fuc();
//		}
//		else
//		{
//			ans += a;
//		}
//	}
//	cout<<ans;
//	return 0;
//}
// 
