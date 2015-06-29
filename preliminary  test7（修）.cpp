#include<iostream>
using namespace std;

int main()
{
	char a[] = "ILOVEMATLAB";
	int n = 0;
	int m = strlen(a) - 1;
	while (m>n)
	{
		char temp = a[n];
		a[n] = a[m];
		a[m] = temp;
		n++;
		m--;
	}
	cout << a << endl;
	system("pause");
	return 0;
}
