#pragma once
#include<iostream>

using namespace std;

//type name (param)
//{
//   body;
//}


template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a + c)
{
	return a + b + c;
}


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
void printArray(T* a, int size)
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
T* addElemArray(T* a, int size, T elem)
{
	T* temp = new T[size + 1];

	for (size_t i = 0; i < size; i++)
	{
		temp[i] = a[i];
	}

	temp[size] = elem;

	delete[]a;

	return temp;
}

template<class T>
T* delElemArray(T* a, int size)
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		temp[i] = a[i];
	}
	delete[]a;
	return temp;
}

template<class T>
T* addElemArray(T* a, int size, T elem, int pos)
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
	return temp;
}