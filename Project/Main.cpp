#include <iostream>
using std::cout;
using std::cin;

#include "C2x2.h"

int main()
{
	string scramble, choice;
	cout << "---------------------------------------------\n" << "\t\tPuzzle solver\n" << "---------------------------------------------" << std::endl;

	cout << "Choose puzzle\n2x2\n3x3" << std::endl;
	cin >> choice;
	cin.ignore(999999, '\n');
	cin.clear();

	if (choice == "2x2")
	{

	}
	else if (choice == "3x3")
	{

	}

	system("pause");
	return 0;
}