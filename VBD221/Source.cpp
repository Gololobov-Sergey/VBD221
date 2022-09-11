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


	/*int a = 8;      int b = 8;
	int* pa = &a;   int& rb = b;
	*pa = 888;      rb = 888;

	cout << a << endl;
	cout << b << endl;

	pa = &b;
	rb = a;*/

	//int a = 10;
	//const int* pa = &a;  // покажчик на константне значення
	//a = 12;
	//*pa = 12;  // not
	//int b = 3;
	//pa = &b;


	//const int& ra = a;
	//ra = 45;

	//int* const pa = &a;    //  константний покажчик
	//int b = 3;
	//*pa = 999;
	//pa = &b; // not

	//int& pb = a;

	//const int* const pa = &a;   // константний покажчик на константне значення


	/*int m, n, k = 0;
	cin >> m >> n;
	int* a = new int[m];
	int* b = new int[n];
	int* c = nullptr;
	setArray(a, m);
	setArray(b, n);
	printArray(a, m);
	printArray(b, n);*/

	/*for (size_t i = 0; i < m; i++)
	{
		if (findKeyArray(b, n, a[i]) == -1 && findKeyArray(c, k, a[i]) == -1) 
		{
			addElemArray(c, k, a[i]);
		}
	}
	printArray(c, k);


	int* x = nullptr;
	dinamic_P(x, 10);*/


	/*const int size = 5;
	int array[size] = { 115,76,16,89,36 };
	int* ptra = array;
	int b_array[size];
	int* ptrb = b_array;
	cout << "Массив А: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(ptra+i) << " ";
	}
	cout << endl;
	cout << "Массив В: ";
	for (int i = 0; i < size; i++)
	{
		ptrb = ptra;
		ptrb--;
		cout << *(ptrb+size-i) << " ";
	}
	cout << endl;*/
	
	


	///// 04.09.2022 ////

	/*for (size_t i = 0; i < 100000000; i++)
	{
		int* p = new int;
		delete p;
	}*/

	/*int n;
	cin >> n;
	int* p = new int[n];
	setArray(p, n);
	printArray(p, n);

	int* b = nullptr, k = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (p[i] % 2 == 0)
			b = addElemArray(b, k++, p[i]);
	}
	printArray(b, k);*/


	/*p = addElemArray(p, n++, 999);
	p = addElemArray(p, n++, 444,3);*/
	//delete[] p;
	


	/*int a[300000] = { 109,2,3,4,5 };

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
	cout << endl;*/



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