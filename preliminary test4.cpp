#include <iostream>
using namespace std;

/*
4、	使用Visual C++ 2012编程：输出1000年（包括1000年）到1999年之间的所有闰年，要求每三个一行，分行输出。
*/

int main()
{
	int a, b = 0;
	for (a = 1000; a < 2000; a++)
	{
		if ( (a%4==0 && a%100!=0) || (a%400==0) )   //复杂表达式写紧凑
		{
			cout << a << " ";
			b++;
			if (b % 3 == 0) //简单表达式写分散
			{
				cout << endl;
			}
		}		
	}
    return 0;
}
