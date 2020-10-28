// 5,1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	float F, x, a, b, c;

	cout << "Vvedite x: ";
	cin >> x;
	cout << "Vvedite a: ";
	cin >> a;
	cout << "Vvedite b: ";
	cin >> b;
	cout << "Vvedite c: ";
	cin >> c;

	if (x < 0 && b != 0)
	{
		F = a * pow(x, 2) + b;

	}
	else if (x > 0 && b == 0)
	{
		F = (x - a) / (x - c);

	}
	else
	{
		F = x / c;
	}
	cout << F << endl;
	system("pause");
	return 0;

}