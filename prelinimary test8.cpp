#include<iostream>
using namespace std;
int main()
{
	char c;
	int n = 0;
	int m = 0;
	int k = 0;
	int f = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= '0'&&c <= '9')
			n++;
		else if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
			m++;
		else if (c ==' ')
			k++;
		else
			f++;
	}
	cout << "���ָ�����" << n << endl;
	cout << "��ĸ������" << m << endl;
	cout << "�ո������" << k << endl;
	cout << "�����ַ�����" << f << endl;
	return 0;
}