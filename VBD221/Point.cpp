#include"Point.h"
#include<iostream>
#include<fstream>

using namespace std;

void Point::print()
{
   cout << name << " " << x << " " << y << endl;
}



void Point::save(ofstream& out)
{
	out << name << " " << x << " " << y << endl;
}