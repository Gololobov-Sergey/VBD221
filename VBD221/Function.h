#pragma once
#include<iostream>
#include"Header.h"

using namespace std;


enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void foooo()
{
	cout << avg(3, 4, 6) << endl;
}

//type name (param)
//{
//   body;
//}


//template<class T1, class T2, class T3>
//auto Sum(T1 a, T2 b, T3 c) -> decltype(a + c)
//{
//	return a + b + c;
//}


void printLine(int count = 10, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}


//float avg(int a, int b, int c)
//{
//	return (a + b + c) / 3.;
//}

bool isEven(int a)
{
	return a % 2 == 0;
}

bool isMult5(int a)
{
	a++;
	return a % 5 == 0;
}

bool isPositive(int a)
{
	return a > 0;
}


template<class T>
void setArray(T* a, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		a[i] = rand() % 10;
	}
}

/// <summary>
/// Виконує друк масиву на екрані консолі
/// </summary>
/// <typeparam name="T">Визначеня типу Т</typeparam>
/// <param name="a">- масив</param>
/// <param name="size">- розмір масиву</param>
template<class T>
void printArray(const T* a, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a"></param>
/// <param name="size"></param>
/// <param name="key"></param>
/// <returns></returns>
template<class T>
int findKeyArray(T* a, int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] == key)
		{
			return i;
		}
	}
	return -1;
}

template<class T>
double maxValueArray(T* a, int size)
{
	T max = a[0];
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

template<class T>
double minValueArray(T* a, int size)
{
	T min = a[0];
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

template<class T>
double avgValueArray(T* a, int size)
{
	T avg = 0;
	for (size_t i = 0; i < size; i++)
	{
		avg += a[i];
	}
	return avg / size;;
}


void fooo()
{
	int a[3] = { 1,2,3 };
	printArray(a, 3);
}


int fact(int n)
{
	int factorial = 1;
	for (size_t i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}

int fact_r(int n)
{
	if (n == 1)
		return 1;
	return n * fact_r(n - 1);
}

void num(int n)
{
	cout << n << " ";
	if (n > 1)
		num(n - 1);
}

void num_(int n)
{
	if (n > 1)
		num_(n - 1);
	cout << n << " ";
}

int pow_(int a, int n)
{
	if (n == 1)
		return a;
	return a * pow_(a, n - 1);
}

template<class T>
void addElemArray(T*& a, int& size, const T& elem)
{
	T* temp = new T[size + 1];

	for (size_t i = 0; i < size; i++)
	{
		temp[i] = a[i];
	}

	temp[size] = elem;

	size++;

	delete[]a;

	a = temp;
}

template<class T>
void delElemArray(T*& a, int& size)
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		temp[i] = a[i];
	}
	delete[]a;
	size--;
	a = temp;
}

template<class T>
void addElemArray(T*& a, int& size, T elem, int pos)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < pos; i++)
	{
		temp[i] = a[i];
	}
	temp[pos] = elem;
	for (size_t i = pos; i < size; i++)
	{
		temp[i + 1] = a[i];
	}
	delete[]a;
	size++;
	a = temp;
}

template<class T>
void dinamic_P(T*& a, int size)
{
	if (size <= 0)
		return;
	a = new T[size];
}

void hello()
{
	cout << "Hello" << endl;
}

void goodbye()
{
	cout << "Goodbye" << endl;
}

int Sum(int a, int b)
{
	return a + b;
}

int Diff(int a, int b)
{
	return a - b;
}

int Mult(int a, int b)
{
	return a * b;
}

template<class T>
bool asc(T a, T b)
{
	return a > b;
}

template<class T>
bool desc(T a, T b)
{
	return a < b;
}


bool evenFirst(int a, int b)
{
	if (a % 2 == 0 && b % 2 == 1)
		return false;
	if (a % 2 == 1 && b % 2 == 0)
		return true;
	return asc(a, b);
}



template<class T>
void bubbleSort(T* a, int n, bool(*method)(T, T) = asc)
{
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - 1 - i; j++)
		{
			if (method(a[j], a[j + 1]))
				swap(a[j], a[j + 1]);
		}
	}
}


void kopatel()
{
	cout << "Копає один робочий з лопатою" << endl;
}

void kopatel3()
{
	cout << "Копають три робочих з лопатою і ломом" << endl;
}

void exkavator()
{
	cout << "Копає екскаватор, робочі палять в сторонці" << endl;
}


void(*prorab(int len))()
{
	if (len < 50)
		return kopatel;
	if (len > 50 && len < 200)
		return kopatel3;
	return exkavator;
}


int lenStr(const char* st)
{
	int count = 0;
	while (st[count] != '\0')
	{
		count++;
	}
	return count;
}

double Action(int* arrA, int sizeA, int* arrB, int sizeB, double(*func)(int*, int))
{
	int* temp = new int[sizeA + sizeB];
	for (size_t i = 0; i < sizeA; i++)
	{
		temp[i] = arrA[i];
	}	for (size_t i = 0; i < sizeB; i++)
	{
		temp[i+sizeA] = arrB[i];
	}
	double res = func(temp, sizeA + sizeB);
	delete[]temp;
	return res;
}


char* reverse2Word(const char* str)
{
	char* res = new char[strlen(str) + 1];
	const char* p = strchr(str, ' ');
	strcpy(res, p + 1);
	strcat(res, " ");
	strncat(res, str, p - str);
	return res;
}

char* firstLetterUp(const char* str)
{
	char* res = new char[strlen(str) + 1];
	strcpy(res, str);
	int i = 1;
	if (islower(res[0]))
		res[0] -= 32;
	while (res[i] != '\0')
	{
		if (islower(res[i]) && isspace(str[i - 1]))
		{
			res[i] -= 32;
		}
		i++;
	}
	return res;
}

char* delSubstr(const char* str, const char* substr)
{
	char* temp = new char[strlen(str) + 1];
	temp[0] = '\0';
	while (strstr(str, substr) != nullptr)
	{
		const char* p = strstr(str, substr);
		strncat(temp, str, p - str);
		str = p + strlen(substr);
	}
	strcat(temp, str);
	char* res = new char[strlen(temp) + 1];
	strcpy(res, temp);
	delete[] temp;
	return res;
}


template<class T>
void createArray2D(T**& arr, int row, int col)
{
	arr = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<class T>
void deleteArray2D(T**& arr, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	arr = nullptr;
}

template<class T>
void setArray2D(T** arr, int row, int col, int min = 0, int max = 9)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}
template<class T>
void printArray2D(T** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
}

template<class T>
void addRowArray2D(T**& arr, int& row, int col, int pos, T* b = nullptr)
{

	T** temp = new T * [row + 1];
	for (size_t i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	temp[pos] = new T[col]{ 0 };
	if (b != nullptr)
	{
		for (size_t i = 0; i < col; i++)
		{
			temp[pos][i] = b[i];
		}
	}
	for (size_t i = pos; i < row; i++)
	{
		temp[i + 1] = arr[i];
	}
	row++;
	delete[]arr;
	arr = temp;
}


template<class T>
void addColumn(T**& arr, int row, int col, int pos) 
{
	for (size_t i = 0; i < row; i++)
	{
		T* temp = new T[col + 1];
		for (size_t j = 0; j < pos; j++)
		{
			temp[j] = arr[i][j];
		}
		temp[pos] = 0;
		for (size_t j = pos; j < col; j++)
		{
			temp[j+1] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = temp;
	}
}