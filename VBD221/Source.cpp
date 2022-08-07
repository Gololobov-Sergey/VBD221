#include<iostream>
#include<Windows.h>
#include<ctime>

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

	//int a, b, c, d, res = 0;
	//cin >> a >> b >> c >> d;

	//for (size_t i = 0; i < 4; i++)
	//{
	//	if (a % 2 == 0)
	//	{
	//		res += a;
	//	}
	//}

	///*if (a % 2 == 0)
	//{
	//	res += a;
	//}
	//if (b % 2 == 0)
	//{
	//	res += b;
	//}
	//if (c % 2 == 0)
	//{
	//	res += c;
	//}
	//if (d % 2 == 0)
	//{
	//	res += d;
	//}*/
	//cout << res << endl;


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

	/*int a, b, max;
	cin >> a >> b;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}*/

	// (condition) ? op1 : op2;

	/*(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;*/

	/////  24.7.2022 ///////////

	/*while (condition)
	{
		operator;
	}*/

	/*int a = 5;

	if (a == 9)
	{
		cout << a;
		cout << a;
	}

	while (a >= 1)
	{
		cout << a << " ";
		a--;
	}*/


	/*int a, b, c = 0;
	cin >> a >> b;
	while (a >= b)
	{
		a -= b;
		c++;
	}
	cout << c << endl;*/


	/*int a, s = 0;
	cin >> a;
	while (a > 0)
	{
		s += (a % 10);
		a /= 10;
	}
	cout << s;*/

	/*int a, s = 0;
	cin >> a;
	while (a > 0)
	{
		int r = a % 10;
		if (r % 2 == 0)
		{
			s++;
		}
		a /= 10;
	}
	cout << s;*/

	//int n, s = 0;
	//do
	//{
	//	cin >> n;
	//	s += n;
	//} while (n != 0); //!!!!!
	//cout << s << endl;

	/*int f1 = 1, f2 = 1, fn, k = 2, n;
	cin >> n;
	while (k < n)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		k++;
	}
	cout << fn << endl;*/


	/*int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		cout << i << " ";
	}*/

	/*for (int i = 0, j = 10; i <= 20; i+=2, j--)
	{
		cout << i << " ";
	}*/

	/*for ( ; ; )
	{
		if(a == 7)
			break;
		cout << 0 << " ";
	}*/

	/*int n;
	cin >> n;
	for (size_t i = 1; i <= 10; i++)
	{
		cout << i << " x " << n << " = " << i * n << endl;
	}*/

	/*for (size_t i = 0; i < 21; i++)
	{
		if (i % 2 == 1)
			continue;
		cout << i << " ";
	}*/


	/*int i, c = 0;
	for (size_t i = 1; i < 1000000; i++)
	{
		int a6 = i % 10;
		int a5 = i / 10 % 10;
		int a4 = i / 100 % 10;
		int a3 = i / 1000 % 10;
		int a2 = i / 10000 % 10;
		int a1 = i / 100000;
		if (a1 + a2 + a3 == a4 + a5 + a6)
		{
			c++;
		}
	}
	cout << c << endl;*/

	/*int c = 0;
	for (size_t h = 0; h < 24; h++)
	{
		int h1 = h / 10;
		int h2 = h % 10;
		for (size_t m = 0; m < 60; m++)
		{
			int m1 = m / 10;
			int m2 = m % 10;
			for (size_t s = 0; s < 60; s++)
			{
				int s1 = s / 10;
				int s2 = s % 10;
				if (h1 == s2 && h2 == s1 && m1 == m2)
				{
					cout << h1 << h2 << ":" << m1 << m2 << ":" << s1 << s2 << endl;
					c++;
				}
			}

		}
	}
	cout << c << endl;*/

	/*int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	////// 07.08.2022  //////

	// type name[size];

	srand(time(0));
	const int size = 10;
	int a[size];
	for (size_t i = 0; i < size; i++)
	{
		/*cout << "a[" << i << "] = ";
		cin >> a[i];*/

		a[i] = rand() % 100;
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	/*int count0 = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (a[i] == 0)
			count0++;
	}

	int count01 = 0;
	for (size_t i = 0; a[i] != 1; i++)
	{
		count01++;
	}*/
	/*cout << count0 << endl;
	cout << count01 << endl;*/


	/*int n;
	cin >> n;
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] == n)
			count++;
	}
	cout << count << endl;*/

	//int max = a[0];
	/*int imax = 0;
	int imin = 0;
	for (size_t i = 0; i < size; i++)
	{
		imax = (a[i] > a[imax]) ? i : imax;
		imin = (a[i] < a[imin]) ? i : imin;
	}

	int i_begin = (imin < imax) ? imin : imax;
	int i_end = (imax > imin) ? imax : imin;

	for (size_t i = i_begin+1; i < i_end; i++)
	{
		a[i] *= 10;
	}*/


	//cout << a[imax] << endl;
	//cout << imax << endl;

	/*int t = a[0];
	a[0] = a[imax];
	a[imax] = t;*/

	//int b[size], c = 0;
	/*for (size_t i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[c++] = a[i];
		}
	}*/

	/*int b[size * 2], c = 0;
	for (size_t i = 0; i < size; i++)
	{
		b[c++] = a[i];
		if (a[i] % 2 == 0)
		{
			b[c++] = 99;
		}

	}*/

	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size-1-i; j++)
		{
			if (a[j] < a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}


	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	/*for (size_t i = 0; i < c; i++)
	{
		cout <<b[i] << " ";
	}
	cout << endl;*/

	//cout << time(0) << endl;


	system("pause");
}