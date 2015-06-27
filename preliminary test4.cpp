#include <iostream>
using namespace std;

int main()
{
	int a,b=0;
	for (a = 1000; a < 2000; a++)
	{
		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 ==0))
		{
			cout << a << " ";
			b++;
			if (b%3==0)
			{
				cout << endl;
			}
		}		
	}
     return 0;
}
