#include<iostream>
using namespace std;
int main()
{ 
	int a, b;
	char c;
	cout << "请输入一个整数：" << endl;
	cin >> a;
	cout << "请输入一个运算符(+ - * /)：" << endl;
	cin >> c;
	cout << "请再输入一个整数" << endl;
	cin >> b;
	if (c == '+')
		cout << a << "+" << b << "=" << (a + b) << endl;
	else if (c == '-')
		cout << a << "-" << b << "=" << (a - b) << endl;
	else if (c == '*')
		cout << a << "*" << b << "=" << a*b << endl;
	else if (c == '/')
		cout << a << "/" << b << "=" << a / b << endl;
	else
		cout << "输入错误!" << endl;
	return 0;
}