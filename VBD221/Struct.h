#pragma once
#include<iostream>
#include<fstream>

using namespace std;


enum Direction
{
	LEFT, RIGHT, UP, DOWN
};

struct Point
{
	int x = 0;
	int y = 0;
	char name;

	void print()
	{
		cout << name << "(" << x << ", " << y << ")" << endl;
	}

	void save(ofstream& out)
	{
		out << name << " " << x << " " << y << endl;
	}
};




struct Date
{
	size_t day   :  5;
	size_t month :  4;
	size_t year  : 12;

	void print()
	{
		if (day < 10)
			cout << 0;
		cout << day << ".";
		if (month < 10)
			cout << 0;
		cout << month << "." << year;
	}
};



struct Student
{
	char* name;
	Date birthDay;

	void print()
	{
		cout << "Name: " << name << endl;
		cout << "BD  : "; birthDay.print();
		cout << endl;
	}
};



struct Fraction
{
	int c, nom, den;

	Fraction add(Fraction f2)
	{
		Fraction res;
		res.nom = nom * f2.den + den * f2.nom;
		res.den = den * f2.den;
		///
		return res;
	}

};






struct Engine
{
	int cilindr = 4;
	int klapan = 8;


	void start()
	{
		cout << "Engine started" << endl;
	}
};


struct Car
{
	Engine engine;


	void move(Direction dir)
	{
		engine.start();
		cout << "Car move" << endl;
		switch (dir)
		{
		case LEFT:
			cout << "Left" << endl;
			break;
		case RIGHT:
			break;
		case UP:
			break;
		case DOWN:
			break;
		default:
			break;
		}
	}

	void beep()
	{
		cout << "Bee beep" << endl;
	}
};


//struct Book
//{
//
//};
//
//struct Biblio
//{
//	Book* books;
//
//	void addBook();
//	///
//	//
//
//	void menu();
//};