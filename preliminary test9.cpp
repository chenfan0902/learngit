#include<iostream>
using namespace std;
int main()
{ 
	int a, b;
	char c;
	cout << "������һ��������" << endl;
	cin >> a;
	cout << "������һ�������(+ - * /)��" << endl;
	cin >> c;
	cout << "��������һ������" << endl;
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
		cout << "�������!" << endl;
	return 0;
}