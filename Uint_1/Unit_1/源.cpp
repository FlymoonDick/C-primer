#include<iostream>
int main()
{
	/*  1.4
	int a, b;
	std::cin >> a >> b;
	std::cout << "a" << "X" << "b" <<"="<< a * b << std::endl;
	return 0;
	*/

	/* 1.5
	int a, b;
	std::cin >> a;
	std::cin >> b;
	std::cout << "a * b =" << a * b << std::endl;
	return 0;
	*/

	/*1.9
	int i = 50,sum = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	std::cout << sum << std::endl;
	return 0;
	*/
	
	/* 1.10 FirstWay
	int i = 0;
	while (i <= 10)
	{
		std::cout << i << std::endl;
		i++;
	}
	return 0;
	*/
	/* SECOND WAY
	for (int i=10; i >=0; i--)
	{
		std::cout << i << std::endl;
	}
	*/

	/* 1.11
	int a,b;
	std::cout << "请输入两个数" << std::endl;
	std::cin >> a >> b ;
	if (a > b)
	{
		for (; b <= a; b++)
		{
			std::cout << b << std::endl;
		}
	}
	if (a < b)
	{
		for (; b >= a; b--)
		{
			std::cout << b << std::endl;
		}
	}
	if (a = b)
	{
		printf("Try again,Please keep two number different");
	}
	return 0;
	*/

	/* 1.16 way1
	int sum = 0, value = 0;
	std::cout << "Please enter data" << std::endl;//windows使用Ctrl+z结束输入
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "The sum of data is" << sum << std::endl;
	return 0;
	*/
	/*way2
	int sum = 0, value = 0;
	for (; std::cin >> value;)//初始化语句 循环条件 表达式
	{
		sum += value;
	}
	std::cout << "= " << sum << std::endl;
	return 0;
	*/

	
	/*int currval = 0, val = 0;
	if (std::cin >> currval)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (val == currval)
			{
				cnt++;
			}
			else
			{
				std::cout << currval << cnt << std::endl;
				currval = val;
				cnt = 1;
			}
		}
		std::cout << currval << "     " << cnt << std::endl;
	}
	return 0;*/
unsigned u1 = 42, u2 = 10;
std::cout << u2 - u1 << std::endl;
}