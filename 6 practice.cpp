// 5,2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"
using namespace std;


int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		//1.	Дано ціле число в діапазоні 1-7. Вивести рядок — назва дня тижня, що відповідає даному числу (1 — понеділок, 2 — «вівторок» тощо). 

		int x;
		cout << "Enter week number: ";
		cin >> x;

		switch (x)
		{
			
		case 1: cout << "Monday"; break;
		case 2: cout << "Tuesday"; break;
		case 3: cout << "Wednesday"; break;
		case 4: cout << "Thursday"; break;
		case 5: cout << "Friday"; break;
		case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        case 8: cout << "Monday2"; break;
		default: cout << "Not found"; break;
		}
		cin >> x ;
		system("pause");
		return 0;
	        }
	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
