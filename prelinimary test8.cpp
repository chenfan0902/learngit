#include<iostream>
#include<stdio.h> //��������ȥ��
using namespace std;

/*
8��ʹ��Visual C++ 2012��̣�����һ���ַ����ֱ�ͳ�����а��������֡���ĸ�������ַ��ĸ���������ͳ�ƽ����ʾ������
*/

int main()
{
	char c;
    /* 
	int n = 0;
	int m = 0;
	int k = 0;
	int f = 0;
    */

    //�������õ�����ϰ��
    int cDigits     = 0;
    int cLetters    = 0;
    int cOthers     = 0;

	while ( (c=getchar()) != '\n' )
	{
		if (c>='0' && c<='9')
			cDigits++;
		else if ( (c>='a' && c<='z') || (c>='A' && c<='Z') )
			cLetters++;
		//else if (c == ' ')    //��Ŀ��Ҫ��ͳ�ƿո������
		//	k++;
		else
			cOthers++;
	}

	cout << "���ָ�����" << cDigits << endl;
	cout << "��ĸ������" << cLetters << endl;
	//cout << "�ո������" << k << endl;
	cout << "�����ַ�������" << cOthers << endl;

    //system("pause");
	return 0;
}
