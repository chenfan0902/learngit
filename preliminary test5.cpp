#include<iostream>
using namespace std;

#define M 4 //学生数
#define N 4 //功课数

double Ave(double(*c)[N]);  //求学生总成绩的平均分，函数名首字母大写
double Min(double(*d)[N]);  //求学生所有科目的最低分

/*
5、	使用Visual C++ 2012编程：有4名学生，每个学生考4门课，要求：写2个函数：
    （1）返回值为总平均分的函数；
    （2）返回值为最低分的函数。
    在main（）函数中输入每个学生4门课的成绩，调用以上2个函数，输出总平均分和最低分。
*/

int main()
{
	//double a, b; 中间变量可以不用
	double stu[M][N];

	for (int i = 0; i < M; i++)
	{
		cout << "Please input no." << i << " student grade" << endl;
		for (int j = 0; j < N; j++)
		{
			cin>> stu[i][j];
		}
	}
    //a = ave(stu); b = min(stu);
	cout << "ave=" << Ave(stu) << endl;
	cout << "min=" << Min(stu) << endl;

    return 0;
}

double Ave(double(*c)[N])
{
	double sum = 0.0;
	//double ave = 0.0;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			sum = sum + c[i][j];
		}
	}
    
	//ave = sum / 16;
	return sum/(M+N);
}
double Min(double(*d)[N])
{
	double min =d[0][0];

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (min > d[i][j])
			{
				min = d[i][j];
			}
		}
	}

	return min;
}
