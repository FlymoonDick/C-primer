#include<iostream>
#include<vector>
#include<vector>
using namespace std;

int main()
{
	//3.24
	//vector<int> v;
	//int i;
	//while (cin >> i)
	//{
	//	v.push_back(i);
	//}
	//for (auto it = v.cbegin(); it != v.cend() - 1; it++)
	//{
	//	cout << (*it + *(it+1)) << endl;
	//}
	//return 0;

	/*vector<int> v;
	int i;
	while (cin >> i)
	{
		v.push_back(i);
	}
	for (auto it1 = v.cbegin(),it2 = v.cend(); it1 !=it2; it1++)
	{
		cout << (*it1 + *(it2-1) )<< endl;
		it2-=1;
	}
	return 0;*/

//	vector<unsigned int> v;
//	vector<unsigned int> n(10,0);
//	unsigned int i;
//	while (cin >> i)
//	{
//		if (i <= 100)
//		v.push_back(i);
//	}
//	auto n_begin = n.begin(), v_begin = v.begin(), n_end = n.end(), v_end = v.end();
//	for (; v_begin != v_end; v_begin++)
//	{
//		auto t=((*v_begin) / 10)  ;
//		n[t] += 1;
//	}
//	for(; n_begin != n_end; n_begin++)
//	{
//		cout << *n_begin << endl;
//	}
//	return 0;

	//3.31
	//int a[10];
	//int b[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	a[i] = i;
	//	b[i] = a[i];
	//}
	//for (auto c : b)
	//{
	//	cout << c << endl;
	//}
	//return 0;

	//3.32
	/*vector<int> v(10);
	for (int i = 0; i < 10;i++)
	{
		v[i] = i;
	}
	for (auto c : v)
	{
		cout << c << endl;
	}
	return 0;*/

	//3.35
	//int a[10];
	//int i;
	//while (cin >> i)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		int* p = a;
	//		p[j] = i;
	//	}
	//}
	//int* p = a;
	//for (int n = 0; n < 10; n++)
	//{
	//	*(p + n) = 0;
	//}

	//for (auto c : a)
	//{
	//	cout << c << endl;
	//}
	//return 0;

	//3.36

	//int a[3] = { 1,2,3 };
	//int b[4] = { 1,3,4 };
	//int* p = a;
	//int* q = b;
	//int cnt = 0;
	//while (p != end(a) && q != end(b))
	//{
	//	if (*p != *q)
	//	{
	//		cout << "false" << endl;
	//	}
	//	p++;
	//	q++;
	//}
	//return 0;

vector<int> v{ 1,2,3,4,5,6,7,8,9 };
vector<int> y{ 1,2,4,5,6,7,8,9,3 };

auto a = v.begin();
auto b = y.begin();
int cnt = 0;
while (a != v.end() && b!=y.end())
{
	if (*a != *b)
	{
		cnt++;
		cout << "false" << cnt << endl;
	}
	a++;
	b++;

}
return 0;
}