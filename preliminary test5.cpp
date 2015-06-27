#include<iostream>
using namespace std;
double ave(double(*c)[4]);
double min(double(*d)[4]);

int main()
{
	double a, b;
	double stu[4][4];
	for (int i = 0; i < 4; i++)
	{
		cout << "Please input no." << i << " student grade" << endl;
		for (int j = 0; j< 4; j++)
		{
			cin>> stu[i][j];
		}
	}
	a = ave(stu); b = min(stu);
	cout << "ave=" << a << endl;
	cout << "min=" << b << endl;
}
double ave(double(*c)[4])
{
	double sum = 0;
	double ave = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum = sum + c[i][j];
		}
	}
	ave = sum / 16;
	return ave;
}
double min(double(*d)[4])
{
	double min =d[0][0];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (min>d[i][j])
			{
				min = d[i][j];
			}
		}
	}
	return min;
}