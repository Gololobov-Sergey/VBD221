#pragma once
#include<fstream>

using namespace std;



struct Point
{
	//координата X
	int x = 0;


	int y = 0;


	char name;


	void print();
	

	//збереження елементу у файл
	void save(ofstream& out);

	void menu();
};
