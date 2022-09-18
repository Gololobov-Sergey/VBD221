#pragma once
#include<iostream>

using namespace std;

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


float avg(int a, int b, int c)
{
	return (a + b + c) / 3.;
}

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

template<class T>
void printArray(const T* a, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

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
T maxValueArray(T* a, int size)
{
	T max = a[0];
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
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