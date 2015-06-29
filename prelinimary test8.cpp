#include<iostream>
#include<stdio.h> //你编译过的去？
using namespace std;

/*
8、使用Visual C++ 2012编程：输入一行字符，分别统计其中包含的数字、字母和其他字符的个数，并将统计结果显示出来。
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

    //养成良好的命名习惯
    int cDigits     = 0;
    int cLetters    = 0;
    int cOthers     = 0;

	while ( (c=getchar()) != '\n' )
	{
		if (c>='0' && c<='9')
			cDigits++;
		else if ( (c>='a' && c<='z') || (c>='A' && c<='Z') )
			cLetters++;
		//else if (c == ' ')    //题目有要求统计空格个数？
		//	k++;
		else
			cOthers++;
	}

	cout << "数字个数：" << cDigits << endl;
	cout << "字母个数：" << cLetters << endl;
	//cout << "空格个数：" << k << endl;
	cout << "其他字符个数：" << cOthers << endl;

    //system("pause");
	return 0;
}
