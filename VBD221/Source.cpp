#include<iostream>
#include<Windows.h>
#include<ctime>
#include<iomanip>
#include"Function.h"

using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

	///// 04.09.2022 ////

	int a[] = { 109,2,3,4,5 };

	int* pa = a;

	for (size_t i = 0; i < 5; i++)
	{
		cout << *(a + i) << " ";
	}
	cout << endl;

	for (int* pa = a; pa != &a[5]; pa++)
	{
		cout << *pa << " ";
	}
	cout << endl;



	/*cout << *(a+0) << endl;
	cout << *(a+1) << endl;
	cout << *(a+2) << endl;
	cout << *(a+3) << endl;
	cout << *(a+4) << endl;*/


	/*int a;
	a = 5;
	int* pa = nullptr;
	if(pa == nullptr)
		pa = &a;
	cout << pa << endl;

	cout << sizeof(pa) << endl;*/

	/*int b = 5;
	int* pb = &b;
	cout << pb << endl;

	cout << (pa != pb) << endl;*/



	//cout << a << endl;
	//cout << typeid(a).name() << endl;
	//cout << &a << endl;
	//cout << sizeof(a) << endl;

	//int* pa = &a;
	//pa++; // -, +, --, ++
	//cout << pa << endl;
	



	/**pa = 100;

	cout << a << endl;

	int b = 88;
	pa = &b;
	*pa = 999;
	cout << b << endl;*/

	





	///// 28.08.2022 ////

	//cout << fact_r(5) << endl;

	/*{
		int a = 10;
		cout << a << endl;
	}

	fooo();*/


	//cout << a << endl;

	///// 14.08.2022 //////

	/*const int size = 10;
	int a[size];
	setArray(a, size);
	printArray(a, size);

	cout << Sum(5, 5.6, 'd') << endl;

	auto x = 9;
	double y = 9.3;

	decltype(x + y) h;

	typedef long double LD;

	LD dd;*/

	/*printLine();
	printLine(20);
	printLine(30, '$');

	cout << Sum() << endl;*/


	/*int a = 5, b = 6;

	printLine();
	printLine();
	printLine();

	int c = Sum(a, b);
	cout << Sum(a, b) << endl;
	cout << avg(3,4,6) << endl;

	if (!isMult5(a) || isPositive(a))
	{

	}*/

	//srand(time(0));
	//const int row = 5, col = 6;
	//int a[row][col];// = { {1,2,},{4,5}, 7,8,7 };
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		a[i][j] = 10*(rand() % 6 + 2);
	//	}
	//}

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	cout << endl;*/

	/*for (size_t i = 0; i < row; i++)
	{
		int sumRow = 0;
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << a[i][j];
			sumRow += a[i][j];
		}
		cout << setw(4) << "|" << setw(4) << sumRow;
		cout << endl;
	}*/

	/*for (size_t i = 0; i < col + 2; i++)
	{
		cout << "----";
	}
	cout << endl;

	int sumAll = 0;
	for (size_t j = 0; j < col; j++)
	{
		int sumCol = 0;
		for (size_t i = 0; i < row; i++)
		{
			sumCol += a[i][j];
		}
		cout << setw(4) << sumCol;
		sumAll += sumCol;
	}
	cout << setw(4) << "|" << setw(4) << sumAll;
	cout << endl;*/


	/*for (size_t j = 0; j < col; j++)
	{
		swap(a[0][j], a[row-1][j]);
	}*/

	/*for (size_t i = 0; i < row; i++)
	{
		swap(a[i][0], a[i][col-1]);
	}


	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}*/

	/*int max = a[0][0], imax = 0, jmax = 0;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				imax = i;
				jmax = j;
			}
		}
	}
	cout << "Max: " << a[imax][jmax] << endl;
	cout << "iMax: " << imax << endl;
	cout << "jMax: " << jmax << endl;*/

	//int f[3][3][3];

	system("pause");
}