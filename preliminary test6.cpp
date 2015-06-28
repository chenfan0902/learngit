#include<iostream>
using namespace std;

int main()
{
	int A[10] = { 203, 3, 45, 6, 9, 200, 80, 1009, 65, 49 };
	int temp;
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j+1]<A[j])
			{
				temp=A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	cout << "order" << endl;
	for (int  k = 0; k <10; k++)
	{
		cout << A[k]<<" ";
	}
	system("pause");
	return 0;
}

