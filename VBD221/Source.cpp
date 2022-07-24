#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

	/*cout << "Hello C++" << endl;
	cout << "Мене звуть Сергій" << endl;*/


	//Реалізуйте клас «Дріб».Необхідно зберігати чисельник
	//і знаменник як змінні - члени.Реалізуйте функції - члени для
	//введення даних в змінні - члени, для виконання арифметичних операцій(додавання, віднімання, множення,
	//ділення, і т.д.).

	/*cout << "Hello C++" << endl;
	cout << "Мене звуть Сергій" << endl;*/

	////// 10.07.2022  /////////

	// type name;
	// 
	// A..Z, a..z, 0..9, _ 
	// 31
	// _, A..Z, a..z



	// bool - 1b
	//
	// char  - 1b
	// 
	// short - 2b
	// int  - 4b
	// long - 4b
	// long long - 8b
	//
	// float - 4b (7)
	// double - 8b (15)

	/*long long year;
	year = 3000000000;
	cout << year << endl;
	year = 454;
	cout << year << endl;


	float x;
	x = -1.5f;
	cout << x << endl;

	char c = 'a';
	cout << c << endl;

	char d = 100;
	cout << d << endl;

	bool b = true;
	cout << b << endl;*/

	// +, -, *, /, (), +=, -=, *=, /=, %, %=, ++, --
	// !, <, >, ==, <=, >=, !=, || or, && and, ^ xor,
	// {}, ::, , , . , ->, [], ?: #, ~, <<, >>, ', ", 

	/*int a = 5, b = 4;
	bool c;
	c = 5 < b || 6 == 6 && 5 > 2;

	cout << c << endl;*/


	/*int a, b, s;

	cout << "Введить значення сторони а: ";
	cin >> a;
	cout << "Введить значення сторони b: ";
	cin >> b;
	s = a * b;
	cout << "Площа прямокутника зі сторонами а = " << a << ", b = " << b <<", дорівнює " << s << endl;*/

	/*int a, b, c;
	float p, S;

	cout << "\t\t Обчислення площі трикутника за трьома сторонами\n";

	cout << "Введіть сторону a трикутника: ";
	cin >> a;
	cout << "Введіть сторону b трикутника: ";
	cin >> b;
	cout << "Введіть сторону c трикутника: ";
	cin >> c;
	p = (a + b + c) / 2.f;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площа трикутника зі сторонами a: " << a << ", b: " << b << ", c: " << c << ", дорівнює " << S << endl;
	cout << p << endl;*/


	///// 17.07.2022 /////

	/*int a = 1;
	if (a > 3)
	{
		cout << "a > 3" << endl;
	}
	else
	{
		cout << "a <= 3" << endl;
	}*/

	/*int a, b, c;
	cin >> a >> b;
	if (b == 0)
	{
		cout << "ERROR" << endl;
	}
	else
	{
		c = a / b;
		cout << c << endl;
	}*/

	/*int a, b, c, d, res = 0;
	cin >> a >> b >> c >> d;
	if (a % 2 == 0)
	{
		res += a;
	}
	if (b % 2 == 0)
	{
		res += b;
	}
	if (c % 2 == 0)
	{
		res += c;
	}
	if (d % 2 == 0)
	{
		res += d;
	}
	cout << res << endl;*/


	/*int a;
	cin >> a;
	if (a > 0)
	{
		cout << "Positive" << endl;
	}
	else
	{
		if (a < 0)
		{
			cout << "Negative" << endl;
		}
		else
		{
			cout << "Zero" << endl;
		}
	}*/


	/*int a, b, res;
	char s;
	cin >> a >> s >> b;*/
	/*if (s == '+')
	{
		res = a + b;
		cout << res << endl;
	}
	else
	{
		if (s == '-')
		{
			res = a - b;
			cout << res << endl;
		}
		else
		{
			if (s == '*')
			{
				res = a * b;
				cout << res << endl;
			}
			else
			{
				if (s == '/')
				{
					res = a / b;
					cout << res << endl;
				}
				else
				{
					cout << "Not operation" << endl;
				}
			}
		}
	}*/

	/*switch (s)
	{
	case '+': res = a + b; cout << res << endl; break;
	case '-': res = a - b; cout << res << endl; break;
	case '*':
		res = a * b;
		cout << res << endl;
		break;
	case '/':
		res = a / b;
		cout << res << endl;
		break;
	default:
		cout << "Not operation" << endl;
		break;
	}*/

	int a, b, max;
	cin >> a >> b;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	// (condition) ? op1 : op2;

	(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;

	system("pause");
}