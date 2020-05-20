#include <iostream>
#include <string>
using namespace std;

#include "cubeClass.h"

int main()
{
	bool run = true;
	cout << "---------------------------------------------------\n\n" << "\tTwisty puzzle solver\n\n" << "---------------------------------------------------\n\n" << endl;
	while (run)
	{
		cubeClass cube;
		string scramble;
		cout << "Enter a scramble(\"quit\" to exit): ";
		cin >> scramble;
		cin.clear();
		cin.ignore(999999, '\n');

		if (scramble == "quit")
			run = false;

		while ((!cube.Scramble(scramble)) && run)
		{
			cout << "Unallowed scramble, try again!\nEnter a scramble(\"quit\" to exit): ";
			cin >> scramble;
			cin.clear();
			cin.ignore(999999, '\n');

			if (scramble == "quit")
			{
				run = false;
				break;
			}
		}

		if (run)
		{
			cube.Solve();

			cout << "Solution: " << cube.UserSolution() << endl;
		}
	}
	
	return 0;
}