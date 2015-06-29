#include<iostream>
using namespace std;

/*
9、使用Visual C++ 2012设计一段程序，实现以下功能：
（1）要求用户输入一个整数；
（2）要求用户输入一个运算符(+  -  *  / )；
（3）要求用户输入一个整数；
（4）输出步骤1输入的整数与步骤3输入的整数，根据步骤2进行运算的结果。
*/

int main()
{ 
	int a, b;
	char c;
    int result = 0;

	cout << "请输入一个整数：" << endl;
	cin >> a;
	cout << "请输入一个运算符(+ - * /)：" << endl;
	cin >> c;
	cout << "请再输入一个整数" << endl;
	cin >> b;
    
    //单个逻辑用if else太过复杂
    /*
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
    */

    switch(c) {

        case '+': result = a + b;
                  break;
        case '-': result = a - b;
                  break;
        case '*': result = a * b;
                  break;
        case '/': result = a / b;
                  break;
        default : cout<<"未定义的操作符:"<<c<<endl;
                  return -1;                 
    }

    cout<<a<<c<<b<<"="<<result<<endl;

	return 0;
}

