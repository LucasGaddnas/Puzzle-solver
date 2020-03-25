#include <iostream>
#include <string>
using namespace std;

#include "cubeClass.h"

int main()
{
	
	cout << "---------------------------------------------------\n\n" << "\tTwisty puzzle solver\n\n" << "---------------------------------------------------\n\n" << endl;
	while (true)
	{
		cubeClass cube;
		string scramble;
		cout << "Enter a scramble(\"quit\" to exit): ";
		cin >> scramble;
		cin.clear();
		cin.ignore(999999, '\n');

		if (scramble == "quit")
			break;

		while (!cube.Scramble(scramble))
		{
			cout << "Unallowed scramble, try again!\nEnter a scramble(\"quit\" to exit): ";
			cin >> scramble;
			cin.clear();
			cin.ignore(999999, '\n');
		}

		cube.Solve();

		cout << "Solution: " << cube.UserSolution() << endl;
	}
	
	return 0;
}