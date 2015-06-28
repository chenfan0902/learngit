#include<iostream>
using namespace std;

/*
6、有如下数组 Array_A[ 203,3,45,6,9,200,80,1009,65,49 ] 用冒泡算法，使用Visual C++ 2012编程:将数组从小到大进行排序。 
 */

int main()
{
	int A[10] = { 203, 3, 45, 6, 9, 200, 80, 1009, 65, 49 };
	int temp;

	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j+1] < A[j])
			{
                //这里不用中间变量可不可以实现两个变量数值的交换？
                //如果可以，哪种方法好？
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	cout << "order" << endl;

	for (int k = 0; k < 10; k++)
	{
		cout <<A[k]<<" ";
	}

	system("pause");
	return 0;
}

