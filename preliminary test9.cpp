#include<iostream>
using namespace std;

/*
9��ʹ��Visual C++ 2012���һ�γ���ʵ�����¹��ܣ�
��1��Ҫ���û�����һ��������
��2��Ҫ���û�����һ�������(+  -  *  / )��
��3��Ҫ���û�����һ��������
��4���������1����������벽��3��������������ݲ���2��������Ľ����
*/

int main()
{ 
	int a, b;
	char c;
    int result = 0;

	cout << "������һ��������" << endl;
	cin >> a;
	cout << "������һ�������(+ - * /)��" << endl;
	cin >> c;
	cout << "��������һ������" << endl;
	cin >> b;
    
    //�����߼���if else̫������
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
		cout << "�������!" << endl;
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
        default : cout<<"δ����Ĳ�����:"<<c<<endl;
                  return -1;                 
    }

    cout<<a<<c<<b<<"="<<result<<endl;

	return 0;
}

