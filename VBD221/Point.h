#pragma once
#include<fstream>

using namespace std;



struct Point
{
	//���������� X
	int x = 0;


	int y = 0;


	char name;


	void print();
	

	//���������� �������� � ����
	void save(ofstream& out);

	void menu();
};
