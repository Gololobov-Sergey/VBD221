#pragma once
#include<iostream>

using namespace std;

struct Point
{
	int x = 0;
	int y = 0;
	char name;
};

void printPoint(Point p)
{
	cout << p.name << "(" << p.x << ", " << p.y << ")" << endl;
}


struct Date
{
	int day, month, year;
};

void printDate(Date d)
{
	if (d.day < 10)
		cout << 0;
	cout << d.day << ".";
	if (d.month < 10)
		cout << 0;
	cout << d.month << "." << d.year;
}

struct Student
{
	char name[20];
	Date birthDay;
};

void printStudent(Student st)
{
	cout << "Name: " << st.name << endl;
	cout << "BD  : "; printDate(st.birthDay);
	cout << endl;
}

struct Fraction
{
	int c, n, d;
};


Fraction add(Fraction f1, Fraction f2)
{

}

struct Car
{
	char* color;
};