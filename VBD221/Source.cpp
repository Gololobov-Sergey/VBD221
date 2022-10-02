#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include<ctime>
#include<iomanip>
#include"Function.h"
#include"Struct.h"

using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

	////// 02.10.2022 ///////

	Point p;
	p.x = 10;
	p.y = 20;
	p.name = 'A';

	Point p1 = {2, 5, 'B'};

	printPoint(p);
	printPoint(p1);

	Point p3[] = { {3,4,'C'}, {3,7,'D'}, 2,6,'E' };
	for (size_t i = 0; i < 3; i++)
	{
		printPoint(p3[i]);
	}
	
	Student st = { "Serg", 1,5,2000 };
	//st.birthDay.day = 15;
	printStudent(st);

	Point* pp = new Point;
	pp->x = 15;

	Point* pa = new Point[5];
	pa[0].x = 12;

	delete[] pa;
	delete pp;

	Car c;
	char buff[80];
	cin.getline(buff, 80);
	c.color = new char[strlen(buff) + 1];
	strcpy(c.color, buff);
	cout << c.color << endl;

	//int p[10][3]; //{1,2,'A'}
	//0 - x, 1 - y, 2 - name


	////// 25.09.2022 ///////

	/*int a = 5;
	int* p1 = &a;
	cout << p1 << endl;
	cout << &p1 << endl;

	int** p2 = &p1;
	cout << p2 << endl;
	cout << *p2 << endl;
	cout << **p2 << endl;*/

	//int row, col;
	//cin >> row >> col;
	//int** p = nullptr;
	//createArray2D(p, row, col);
	//setArray2D(p, row, col, -5, 15);
	//printArray2D(p, row, col);
	//cout << endl;

	//int* b = new int[col];
	//setArray(b, col);
	//printArray(b, col);
	//cout << endl;

	//addColumn(p, row, col, 2);
	////addRowArray2D(p, row, col, 2);
	//printArray2D(p, row, col);



	//deleteArray2D(p, row);
	//cout << p << endl;

	/*int** p = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		p[i] = new int[col];
	}*/



	//Gololobov Serhiy      
	//Serhiy Gololobov
	/*cout << reverse2Word("Gololobov Serhiy") << endl;

	cout << firstLetterUp("  JHGJHG sdkfjg dskjf wer    ertrwe wertert  ") << endl;
	cout << delSubstr("C++, C#, PHP, Java, PHP, SQL, PHP", "PHP,") << endl;*/



	//123 

	////// 18.09.2022 ///////


	/*char str[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	char str1[] = "Hello";
	int a[] = { 11,2,3,4,5 };

	char* t = str + 2;
	cout << t << endl;


	cout << lenStr(str1) << endl;
	cout << strlen(str1) << endl;*/



	/*char str[80];
	cin.getline(str, 80);
	cout << str << endl;*/

	/*char buff[1024];
	cin.getline(buff, 1024);
	char* st1 = new char[strlen(buff) + 1];
	strcpy(st1, buff);

	char* st2 = new char[80];
	cin.getline(st2, 80);*/


	//strcpy(st1, st2);
	//cout << st1 << endl;

	//strcpy_s(st1, 80, st2);
	//cout << st1 << endl;

	//strncpy(st1, st2, 5);
	//cout << st1 << endl;

	//strncpy_s(st1, 80, st2, 5);
	//cout << st1 << endl;

	//cout << (void*)st1 << endl;

	//strcat(st1, st2);
	//cout << st1 << endl;

	//strncat(st1, st2, 5);
	//cout << st1 << endl;

	//cout << strcmp(st1, st2) << endl;
	//cout << strncmp(st1, st2, 5) << endl;
	//cout << _stricmp(st1, st2) << endl;
	//cout << _strnicmp(st1, st2, 5) << endl;


	//char* t = strchr(st1, 's');
	//char* t = strrchr(st1, 's');
	/*char* t = strstr(st1, st2);
	if(t)
		cout << t << endl;*/

	//cout << _strlwr(st1) << endl;
	//cout << _strupr(st1) << endl;


	//cout << _strrev(st1) << endl;

	//_strset(st1, '#');
	//cout << st1 << endl;

	/*cout << isalnum('!') << endl;
	cout << isdigit('3') << endl;
	cout << isspace('3') << endl;
	cout << ispunct('3') << endl;
	cout << isalpha('G') << endl;
	cout << islower('s') << endl;
	cout << isupper('s') << endl;*/

	//int f = atoi(st1);
	//cout << f << endl;

	/*double f = atof(st1);
	cout << f << endl;*/

	//long f = atol(st1);
	//cout << f << endl;

	/*_itoa(24646, st1, 2);
	cout << st1 << endl;*/

	/*int len;
	cin >> len;

	void(*director)() = prorab(len);
	director();*/


	/*int n;
	cin >> n;
	int* p = new int[n];
	setArray(p, n);
	printArray(p, n);
	bubbleSort(p, n);
	printArray(p, n);*/


	//cout << hello << endl;

	// type (*name) (param);

	/*void(*message)();
	message = hello;
	message();
	message = goodbye;
	message();*/

	/*int(*operation[])(int, int) = {Sum, Diff, Mult};
	int a, b;
	cin >> a >> b;
	cout << "1+, 2-, 3*";
	int n;
	cin >> n;
	cout << operation[n-1](a, b) << endl;*/
	/*for (size_t i = 0; i < 3; i++)
	{
		cout << operation[i](a, b) << endl;
	}*/


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