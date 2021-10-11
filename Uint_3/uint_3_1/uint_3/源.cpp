#include <iostream>
#include"string"
#include<vector>
//#include "uint3_test1.h"
using namespace std;
int main()
{
	//3.1 ----1.9
	/*int i = 50;
	int sum = 0;
	while (i <= 100)
	{
		i++;
		sum += i;
	}
	cout << sum;
	return 0;*/

	//3.1 ----1.10

	//int i = 10;
	//while (i >= 0)
	//{
	//	cout << i;
	//	i--;
	//}
	//return 0;

	//int a, b;
	//cin >> a >> b;
	//if (a > b)
	//{
	//	for (; a >= b; a--)
	//	{
	//		cout << a;
	//	}
	//}
	//if (a < b)
	//{
	//	for (; a <= b; b--)
	//	{
	//		cout << b;
	//	}
	//}
	//return 0;

	//3.2
	//string s1;
	//while(getline(cin,s1))
	//{
	//	cout << s1 << endl;
 //   }
	//return 0;

	/*string s2;
	while (cin >> s2)
	{
		cout << s2 << endl;
	}
	return 0;*/

	//3.4
	//string s3, s4;
	//cin >> s3 >> s4;
	//if (s3 == s4)
	//{
	//	cout << s3 << endl;
	//}
	//while (s3 != s4)
	//{
	//	if (s3 > s4)
	//	{
	//		cout << s3 << endl;
	//		break;
	//	}
	//	if (s4 > s3)
	//	{
	//		cout << s4 << endl;
	//		break;
	//	}
	//}
	//return 0;

	//string s5,s6;
	//cin >> s5 >> s6;
	//while (s5.size() == s6.size())
	//{
	//	if (s5 > s6)
	//	{
	//		cout << s5 << endl;
	//		break;
	//	}
	//	if (s5 < s6)
	//	{
	//		cout << s6 << endl;
	//		break;
	//	}
	//}
	//while (s5.size() != s6.size())
	//{
	//	if (s5.size() > s6.size())
	//	{
	//		cout << s5 << endl;
	//		break;
	//	}
	//	if (s5.size() < s6.size())
	//	{
	//		cout << s6 << endl;
	//		break;
	//	}
	//}
	//return 0;

//string s7;
//string sum;
//while (getline(cin, s7))
//{
//	sum += s7 + ' ';
//	cout << sum << endl;
//}
//return 0;

////string str("some string");
////for (auto &c : str)
////{
////	c = toupper(c);
////	//cout << c << endl;
////}
////cout << str << endl;
////return 0;

//3.6
//string s1;
//cin >> s1;
//for (auto &c : s1)
//{
//	c = toupper(c);
//}
//cout << s1 << endl;
//return 0;

//3.7
//string s1;
//cin >> s1;
//for (char &c : s1)
//{
//	c = toupper(c);
//}
//cout << s1 << endl;
//return 0;

//3.8
//string s2;
//int n = 0;
//cin >> s2;
//while (n < s2.size())
//{
//	s2[n]=toupper(s2[n]);
//	n++;
//}
//cout << s2 << endl;
//return 0;

//string s3;
//cin >> s3;
//for (int n = 0; n != s3.size(); n++)
//{
//	s3[n] = toupper(s3[n]);
//}
//cout << s3 << endl;
//
//return 0;

//string s4 , s5, sum;
//cin >> s4;
//for (auto c : s4)
//{
//	if (!ispunct(c))
//	{
//		sum += c;
//	}
//}
//cout << sum << endl;
//return 0;

//3.15
//vector<int> s1;
//int s2;
//char y = 'y';
//while (cin >> s2)
//{
//	s1.push_back(s2);
//	if (cin  >>  y)
//	{
//		break;
//	}
//}
//for (auto mem : s1)
//{
//	cout << mem +1<< "";
//}
//cout << endl;
//return 0;

//3.16
vector<int> v3;
int n;
while (cin >> n)
{
	v3.push_back(n);

}
auto b = v3.size();
cout << n << " " << b << " " << endl;
return 0;
}