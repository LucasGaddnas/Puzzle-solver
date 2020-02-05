#include "cubeClass.h"
#include <iostream>

cubeClass::cubeClass(std::string scramble)
{
	for (std::string::size_type count = 0; count < scramble.length(); count++)
	{
		switch (scramble[count])
		{
		case 'U':
			U();
			break;
		case 'L':
			L();
			break;
		case 'F':
			F();
			break;
		case 'R':
			R();
			break;
		case 'B':
			B();
			break;
		case 'D':
			D();
			break;
		case 'u':
			u();
			break;
		case 'l':
			l();
			break;
		case 'f':
			f();
			break;
		case 'r':
			r();
			break;
		case 'b':
			b();
			break;
		case 'd':
			d();
			break;
		case '2':
			switch (scramble[count - 1])
			{
			case 'U':
				U();
				break;
			case 'L':
				L();
				break;
			case 'F':
				F();
				break;
			case 'R':
				R();
				break;
			case 'B':
				B();
				break;
			case 'D':
				D();
				break;
			case 'u':
				u();
				break;
			case 'l':
				l();
				break;
			case 'f':
				f();
				break;
			case 'r':
				r();
				break;
			case 'b':
				b();
				break;
			case 'd':
				d();
				break;
			}
			break;
		default:
			error = 1;
			break;
		}
	}
	solution = "";	//resets the solution string after scramble is done
}
void cubeClass::Solve()
{
	int piece = 1;
	for (int step = 1; step < 6; step++)
	
		for (int face = 0; face < 6; face++)
		{
			bool willBreak = false;
			for (int currentPlace = 0; currentPlace < 8; currentPlace++)
			{
				if (cube[face][currentPlace] == piece)
				{
					//searching for the piece that needs to be moved
					switch (piece)
					{
					case 1: //cross
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								U(), U(), F(), F();
								break;
							case 2:
								U(), F(), F();
								break;
							case 4:
								F(), F();
								break;
							case 6:
								u(), F(), F();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								L(), f();
								break;
							case 2:
								f();
								break;
							case 4:
								l(), f();
								break;
							case 6:
								L(), L(), f();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								U(), L(), f();
								break;
							case 2:
								r(), d();
								break;
							case 4:
								F(), L(), D();
								break;
							case 6:
								L(), D();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								r(), F();
								break;
							case 2:
								R(), R(), F();
								break;
							case 4:
								R(), F();
								break;
							case 6:
								F();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								U(), r(), F();
								break;
							case 2:
								l(), D();
								break;
							case 4:
								B(), R(), d();
								break;
							case 6:
								R(), d();
								break;
							}
							break;
						case 5:
							switch (currentPlace)
							{
							case 2:
								d();
								break;
							case 4:
								D(), D();
								break;
							case 6:
								D();
								break;
							default:
								break;
							}
							break;
						}
						break;
					case 2: //cross
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								U(), R(), R();
								break;
							case 2:
								R(), R();
								break;
							case 4:
								u(), R(), R();
								break;
							case 6:
								U(), U(), R(), R();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								u(), F(), r(), f();
								break;
							case 2:
								f(), D(), F();
								break;
							case 4:
								l(), d(), f(), D();
								break;
							case 6:
								D(), B(), d();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								F(), r(), f();
								break;
							case 2:
								r();
								break;
							case 6:
								D(), D(), L(), D(), D();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								U(), F(), r(), f();
								break;
							case 2:
								D(), b(), d();
								break;
							case 4:
								R(), F(), D(), f();
								break;
							case 6:
								F(), D(), f();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								b(), R();
								break;
							case 2:
								D(), D(), l(), D(), D();
								break;
							case 4:
								B(), R();
								break;
							case 6:
								R();
								break;
							}
							break;
						case 5:
							switch (currentPlace)
							{
							case 4:
								F(), d(), f();
								break;
							case 6:
								F(), D(), D(), F();
								break;
							default:
								break;
							}
							break;
						}
						break;
					case 3: //cross
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								B(), B();
								break;
							case 2:
								u(), B(), B();
								break;
							case 4:
								U(), U(), B(), B();
								break;
							case 6:
								U(), B(), B();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								l(), B();
								break;
							case 2:
								L(), L(), B();
								break;
							case 4:
								L(), B();
								break;
							case 6:
								B();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								U(), l(), B();
								break;
							case 2:
								d(), r(), D();
								break;
							case 6:
								D(), L(), d();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								R(), b(), r();
								break;
							case 2:
								b();
								break;
							case 6:
								D(), D(), F(), D(), D();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								u(), l(), B();
								break;
							case 2:
								D(), l(), d();
								break;
							case 4:
								b(), D(), l(), d();
								break;
							case 6:
								d(), R(), D();
								break;
							}
							break;
						case 5:
							switch (currentPlace)
							{
							case 6:
								l(), D(), L(), d();
								break;
							default:
								break;
							}
							break;
						}
						break;
					case 4: //cross
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								u(), L(), L();
								break;
							case 2:
								U(), U(), L(), L();
								break;
							case 4:
								U(), L(), L();
								break;
							case 6:
								L(), L();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								u(), f(), L(), F();
								break;
							case 2:
								D(), f(), d();
								break;
							case 4:
								l(), D(), f(), d();
								break;
							case 6:
								d(), B(), D();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								f(), L(), F();
								break;
							case 2:
								F(), F(), L(), F(), F();
								break;
							case 6:
								L();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								U(), f(), L(), F();
								break;
							case 2:
								d(), b(), D();
								break;
							case 6:
								D(), F(), d();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								B(), l(), b();
								break;
							case 2:
								l();
								break;
							case 6:
								D(), D(), R(), D(), D();
								break;
							}
							break;
						default:
							break;
						}
						moveArray[0] = moveCounter;
						break;
					case 5: //corner
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 1:
								L(), u(), L(), L(), U(), L();
								break;
							case 3:
								r(), U(), R(), f(), L(), F(), l();
								break;
							case 5:
								F(), F(), L(), F(), F(), l();
								break;
							case 7:
								l(), u(), L(), U(), l(), u(), L(), U(), l(), u(), L(), U();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 1:
								u(), L(), f(), l(), F();
								break;
							case 3:
								f(), L(), F(), l();
								break;
							case 5:
								l(), u(), L(), U(), f(), L(), F(), l();
								break;
							case 7:
								L(), U(), L(), L(), U(), U(), L();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 1:
								L(), f(), l(), F();
								break;
							case 3:
								U(), f(), L(), F(), l();
								break;
							case 5:
								R(), u(), r(), U(), f(), L(), F(), l();
								break;
							case 7:
								l(), U(), L(), L(), f(), l(), F();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 1:
								l(), U(), L();
								break;
							case 3:
								F(), U(), U(), f();
								break;
							case 5:
								r(), u(), R(), F(), u(), f();
								break;
							case 7:
								R(), U(), r(), L(), f(), l(), F();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 1:
								l(), U(), U(), L();
								break;
							case 3:
								F(), u(), f();
								break;
							case 5:
								L(), u(), l(), F(), u(), f();
								break;
							case 7:
								r(), U(), R(), l(), U(), U(), L();
								break;
							}
							break;
						case 5:
							switch (currentPlace)
							{
							case 3:
								R(), U(), r(), f(), L(), F(), l();
								break;
							case 5:
								F(), F(), R(), R(), F(), F(), R(), R();
								break;
							case 7:
								L(), u(), l(), u(), L(), f(), l(), F();
								break;
							}
							break;
						}
						break;
					case 6: //corner
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 1:
								R(), U(), R(), R(), F(), R(), f();
								break;
							case 3:
								R(), R(), F(), R(), R(), f();
								break;
							case 5:
								u(), R(), R(), F(), R(), R(), f();
								break;
							case 7:
								U(), U(), R(), R(), F(), R(), R(), f();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 1:
								f(), U(), U(), F();
								break;
							case 3:
								R(), u(), r();
								break;
							case 7:
								L(), U(), l(), f(), U(), F();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 1:
								u(), F(), r(), f(), R();
								break;
							case 3:
								r(), F(), R(), f();
								break;
							case 5:
								R(), u(), R(), R(), F(), R(), f();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 1:
								R(), U(), r();
								break;
							case 3:
								U(), r(), F(), R(), f();
								break;
							case 5:
								r(), u(), R(), R(), U(), U(), r();
								break;
							case 7:
								R(), U(), r(), u(), F(), r(), f(), R();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 1:
								f(), U(), F();
								break;
							case 3:
								R(), U(), U(), r();
								break;
							case 5:
								L(), u(), l(), R(), U(), U(), r();
								break;
							case 7:
								r(), U(), R(), f(), U(), F();
								break;
							}
							break;
						case 5:
							switch (currentPlace)
							{
							case 5:
								B(), U(), b(), r(), F(), R(), f();
								break;
							case 7:
								L(), U(), U(), l(), r(), F(), R(), f();
								break;
							}
							break;
						}
						break;
					case 7: //corner
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 1:
								L(), U(), U(), l(), R(), b(), r(), B();
								break;
							case 3:
								r(), U(), R(), B(), U(), U(), b();
								break;
							case 5:
								u(), r(), U(), R(), B(), U(), U(), b();
								break;
							case 7:
								U(), L(), U(), U(), l(), R(), b(), r(), B();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 1:
								r(), U(), R();
								break;
							case 3:
								B(), U(), U(), b();
								break;
							case 7:
								L(), U(), l(), R(), b(), r(), B();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 1:
								r(), U(), U(), R();
								break;
							case 3:
								B(), u(), b();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 1:
								u(), R(), b(), r(), B();
								break;
							case 3:
								b(), R(), B(), r();
								break;
							case 5:
								r(), u(), R(), U(), b(), R(), B(), r();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 1:
								R(), b(), r(), B();
								break;
							case 3:
								U(), b(), R(), B(), r();
								break;
							case 5:
								L(), u(), l(), U(), b(), R(), B(), r();
								break;
							case 7:
								r(), U(), R(), R(), b(), r(), B();
								break;
							}
							break;
						case 5:
							switch (currentPlace)
							{
							case 7:
								L(), U(), l(), b(), R(), B(), r();
								break;
							}
							break;
						}
						break;
					case 8: //corner
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 1:
								L(), u(), l(), b(), U(), U(), B();
								break;
							case 3:
								u(), L(), u(), l(), b(), U(), U(), B();
								break;
							case 5:
								U(), U(), L(), u(), l(), b(), U(), U(), B();
								break;
							case 7:
								U(), L(), u(), l(), b(), U(), U(), B();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 1:
								B(), l(), b(), L();
								break;
							case 3:
								U(), l(), B(), L(), b();
								break;
							case 7:
								L(), U(), l(), u(), B(), l(), b(), L();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 1:
								b(), U(), B();
								break;
							case 3:
								L(), U(), U(), l();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 1:
								b(), U(), U(), B();
								break;
							case 3:
								L(), u(), l();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 1:
								u(), B(), l(), b(), L();
								break;
							case 3:
								l(), B(), L(), b();
								break;
							case 5:
								L(), u(), L(), L(), B(), L(), b();
								break;
							}
							break;
						}
						moveArray[1] = moveCounter;
						break;
					case 9: //edge
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								F(), u(), f(), L(), f(), l(), F();
								break;
							case 2:
								u(), F(), u(), f(), L(), f(), l(), F();
								break;
							case 4:
								U(), U(), F(), u(), f(), L(), f(), l(), F();
								break;
							case 6:
								U(), F(), u(), f(), L(), f(), l(), F();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								U(), U(), l(), U(), L(), f(), L(), F(), l();
								break;
							case 2:
								l(), U(), L(), u(), F(), U(), U(), f(), U(), f(), L(), F(), l();
								break;
							case 6:
								L(), u(), l(), B(), l(), b(), L(), u(), l(), U(), L(), f(), L(), F(), l();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								u(), l(), U(), L(), f(), L(), F(), l();
								break;
							case 2:
								R(), u(), r(), F(), r(), f(), R(), F(), u(), f(), L(), f(), l(), F();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								l(), U(), L(), f(), L(), F(), l();
								break;
							case 2:
								r(), U(), R(), b(), R(), B(), r(), u(), l(), U(), L(), f(), L(), F(), l();
								break;
							case 6:
								R(), u(), r(), F(), r(), f(), R(), U(), l(), U(), L(), f(), L(), F(), l();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								U(), l(), U(), L(), f(), L(), F(), l();
								break;
							case 2:
								L(), u(), l(), B(), l(), b(), L(), U(), U(), F(), u(), f(), L(), f(), l(), F();
								break;
							case 6:
								r(), U(), R(), b(), R(), B(), r(), U(), U(), F(), u(), f(), L(), f(), l(), F();
								break;
							}
							break;
						}
						break;
					case 10: //edge
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								r(), F(), R(), f(), R(), U(), r();
								break;
							case 2:
								u(), r(), F(), R(), f(), R(), U(), r();
								break;
							case 4:
								U(), U(), r(), F(), R(), f(), R(), U(), r();
								break;
							case 6:
								U(), r(), F(), R(), f(), R(), U(), r();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								R(), u(), r(), F(), r(), f(), R();
								break;
							case 6:
								L(), u(), l(), B(), l(), b(), L(), U(), R(), u(), r(), F(), r(), f(), R();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								U(), R(), u(), r(), F(), r(), f(), R();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								U(), U(), R(), u(), r(), F(), r(), f(), R();
								break;
							case 2:
								r(), U(), R(), b(), R(), B(), r(), U(), R(), u(), r(), F(), r(), f(), R();
								break;
							case 6:
								R(), u(), r(), F(), r(), f(), R(), u(), R(), u(), r(), F(), r(), f(), R();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								u(), R(), u(), r(), F(), r(), f(), R();
								break;
							case 2:
								L(), u(), l(), B(), l(), b(), L(), U(), U(), r(), F(), R(), f(), R(), U(), r();
								break;
							case 6:
								r(), U(), R(), b(), R(), B(), r(), U(), U(), r(), F(), R(), f(), R(), U(), r();
								break;
							}
							break;
						}
						break;
					case 11: //edge
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								U(), U(), B(), U(), b(), u(), r(), u(), R();
								break;
							case 2:
								U(), B(), U(), b(), u(), r(), u(), R();
								break;
							case 4:
								B(), U(), b(), u(), r(), u(), R();
								break;
							case 6:
								u(), B(), U(), b(), u(), r(), u(), R();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								r(), U(), R(), b(), R(), B(), r();
								break;
							case 6:
								L(), u(), l(), B(), l(), b(), L(), U(), r(), U(), R(), b(), R(), B(), r();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								U(), r(), U(), R(), b(), R(), B(), r();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								U(), U(), r(), U(), R(), b(), R(), B(), r();
								break;
							case 2:
								r(), U(), R(), u(), B(), U(), U(), b(), U(), b(), R(), B(), r();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								u(), r(), U(), R(), b(), R(), B(), r();
								break;
							case 2:
								L(), u(), l(), B(), l(), b(), L(), B(), u(), b(), R(), b(), r(), B();
								break;
							}
							break;
						}
						break;
					case 12: //edge
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 0:
								U(), U(), l(), B(), L(), b(), L(), U(), l();
								break;
							case 2:
								U(), l(), B(), L(), b(), L(), U(), l();
								break;
							case 4:
								l(), B(), L(), b(), L(), U(), l();
								break;
							case 6:
								u(), l(), B(), L(), b(), L(), U(), l();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 0:
								U(), U(), L(), u(), l(), B(), l(), b(), L();
								break;
							case 6:
								L(), u(), l(), U(), b(), U(), U(), B(), u(), B(), l(), b(), L();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 0:
								u(), L(), u(), l(), B(), l(), b(), L();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 0:
								L(), u(), l(), B(), l(), b(), L();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 0:
								U(), L(), u(), l(), B(), l(), b(), L();
								break;
							}
							break;
						}
						moveArray[2] = moveCounter;
						break;
					case 13: //LL-corner
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 3:
								u();
								break;
							case 5:
								U(), U();
								break;
							case 7:
								U();
								break;
							}
							break;
						case 1:
							switch (currentPlace)
							{
							case 1:
								l(), u(), L(), u(), l(), U(), U(), L(), U(), U();
								break;
							case 3:
								u(), f(), l(), U(), R(), u(), L(), U(), r(), u(), F();
								break;
							}
							break;
						case 2:
							switch (currentPlace)
							{
							case 1:
								l(), U(), R(), u(), L(), U(), r(), u();
								break;
							case 3:
								f(), l(), U(), R(), u(), L(), U(), r(), u(), F();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 1:
								u(), l(), U(), R(), u(), L(), U(), r();
								break;
							case 3:
								R(), u(), l(), U(), r(), u(), L(), U();
								break;
							}
							break;
						case 4:
							switch (currentPlace)
							{
							case 1:
								b(), u(), B(), u(), b(), U(), U(), B(), U();
								break;
							case 3:
								R(), U(), r(), U(), R(), U(), U(), r(), U(), U();
								break;
							}
							break;
						}
						moveArray[3] = moveCounter;
						break;
					case 14: //LL-corner
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 5:
								R(), U(), U(), r(), u(), R(), U(), U(), l(), U(), r(), u(), L();
								break;
							case 7:
								f(), L(), f(), R(), R(), F(), l(), f(), R(), R(), F(), F();
								break;
							}
							break;
						case 1:
							B(), l(), b(), L(), U(), L(), u(), l();
							break;
						case 2:
							switch (currentPlace)
							{
							case 1:
								r(), U(), L(), u(), R(), U(), l(), u();
								break;
							case 3:
								U(), L(), u(), r(), U(), l(), u(), R();
								break;
							}
							break;
						case 3:
							switch (currentPlace)
							{
							case 1:
								U(), L(), F(), r(), f(), l(), F(), R(), f();
								break;
							case 3:
								F(), U(), f(), U(), F(), U(), U(), f(), U(), U();
								break;
							}
							break;
						case 4:
							U(), R(), U(), U(), r(), u(), R(), u(), r(), U();
							break;
						}
						moveArray[4] = moveCounter;
						break;
					case 15: //LL-corner
						switch (face)
						{
						case 0:
							if (cube[0][7] == currentPlace)
							{
								F(), U(), U(), f(), u(), F(), U(), U(), b(), U(), f(), u(), B();
							}
							break;
						case 1:
							U(), U(), r(), U(), R(), U(), U(), l(), r(), U(), R(), u(), L();
							break;
						case 2:
							switch (currentPlace)
							{
							case 1:
								f(), l(), U(), U(), r(), U(), L(), u(), R(), U(), U(), F(), u();
								break;
							case 3:
								L(), L(), b(), U(), B(), u(), b(), u(), B(), B(), L(), b(), L(), U();
								break;
							}
							break;
						case 3:
							B(), l(), B(), L(), L(), u(), l(), u(), L(), U(), l(), B(), B(), U();
							break;
						}
						moveArray[5] = moveCounter;
						break;
					case 16: //LL back-edge
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 2:
								B(), u(), B(), U(), B(), U(), B(), u(), b(), u(), B(), B();
								break;
							case 4:
								F(), u(), F(), U(), F(), U(), F(), u(), f(), u(), F(), F();
								break;
							case 6:
								b(), U(), b(), u(), b(), u(), b(), U(), B(), U(), B(), B();
								break;
							}
							break;
						case 1:
							R(), R(), u(), F(), U(), r(), u(), R(), R(), f(), r(), U(), R(), u(), R(), R();
							break;
						case 2:
							l(), u(), B(), l(), b(), L(), U(), L(), b(), r(), u(), R(), U(), B();
							break;
						case 3:
							r(), u(), F(), r(), f(), R(), U(), R(), F(), U(), R(), u(), r(), f();
							break;
						case 4:
							R(), B(), U(), b(), u(), r(), f(), u(), L(), f(), l(), F(), U(), F();
							break;
						}
						break;
					case 17: //LL-edge
						switch (face)
						{
						case 0:
							switch (currentPlace)
							{
							case 4:
								R(), u(), R(), U(), R(), U(), R(), u(), r(), u(), R(), R();
								break;
							case 6:
								l(), U(), l(), u(), l(), u(), l(), U(), L(), U(), L(), L();
								break;
							}
							break;
						case 1:
							f(), U(), U(), F();
							break;
						case 2:
							f(), U(), U(), F(), R(), B(), L(), U(), U(), l(), b(), r();
							break;
						case 3:
							r(), U(), U(), R(), R(), U(), r(), u(), r(), U(), U(), L(), F(), R(), f(), l();
							break;
						}
						break;
					case 18: //LL-edge
						if (cube[2][0] == piece)
							f(), U(), U(), F(), F(), U(), f(), u(), f(), U(), U(), B(), L(), F(), l(), b();
						break;
					}
					if (piece / 4 == step)	//switches between corners and edges
					{
						piece++;
						willBreak = true;
						break;
					}
					else
					{
						piece++;
						currentPlace = 0;
						face = 0;
					}
				}
			}
			if (willBreak == true) break;	//indicates that the piece is found and breaks the search loop
		}
	}
}
std::string cubeClass::RobotSolution()
{
	return solution;
}
std::string cubeClass::UserSolution()
{
	//adds newlines after every step
	for (size_t step = 0; step < 6; step++)
	{
		for (size_t index = 0; index < moveCounter; index++)
		{
			if (index == moveArray[step])
			{
				solution.insert(index - 1, "\n");
				break;
			}
		}
	}
	//removes extra turns from the solution once cube has been solved
	for (size_t index = 0; index < solution.length(); index++)
	{
		if (solution[index] == solution[index + 1] + 32 || solution[index] == solution[index + 1] - 32)
		{
			solution.erase(index, 2);
		}
	}
	for (size_t index = 0; index < solution.length(); index++)
	{
		if (solution[index] == solution[index + 1] && solution[index] != '\n')
		{
			//adds 2's for better readability
			solution[index + 1] = '2';
		}
		else if (solution[index] == solution[index + 1])
		{
			//removes empty lines
			solution.erase(index, 1);
		}
	}
	return solution;
}
void cubeClass::Show()
{
	for (int face = 0; face < 6; face++)
	{
		for (int piece = 0; piece < 9; piece++)
		{
			std::cout << cube[face][piece] << ", ";
		}
		std::cout << '\n';
	}
}
int cubeClass::GetError()
{
	return error;
}
int cubeClass::GetMoveCount()
{
	return moveCounter;
}
void cubeClass::U()
{
	Clockwise(0);
	for (int piece = 0; piece <= 1; piece++)
	{
		int temp = cube[1][piece];
		for (int face = 1, next = 2; face <= 3; face++, next++)
		{
			cube[face][piece] = cube[next][piece];
		}
		cube[4][piece] = temp;
	}
	int temp = cube[1][3];
	for (int face = 1, next = 2; face <= 3; face++, next++)
	{
		cube[face][3] = cube[next][3];
	}
	cube[4][3] = temp;
	solution.append("U");
	moveCounter++;
}
void cubeClass::L()
{
	Clockwise(1);
	int temp = cube[0][6];
	cube[0][6] = cube[4][2];
	cube[4][2] = cube[5][6];
	cube[5][6] = cube[2][6];
	cube[2][6] = temp;
	temp = cube[0][1];
	cube[0][1] = cube[4][5];
	cube[4][5] = cube[5][1];
	cube[5][1] = cube[2][1];
	cube[2][1] = temp;
	temp = cube[0][7];
	cube[0][7] = cube[4][3];
	cube[4][3] = cube[5][7];
	cube[5][7] = cube[2][7];
	cube[2][7] = temp;
	solution.append("L");
	moveCounter++;
}
void cubeClass::F()
{
	Clockwise(2);
	int temp = cube[0][4];
	cube[0][4] = cube[1][2];
	cube[1][2] = cube[5][0];
	cube[5][0] = cube[3][6];
	cube[3][6] = temp;
	temp = cube[0][5];
	cube[0][5] = cube[1][3];
	cube[1][3] = cube[5][1];
	cube[5][1] = cube[3][7];
	cube[3][7] = temp;
	temp = cube[0][7];
	cube[0][7] = cube[1][5];
	cube[1][5] = cube[5][3];
	cube[5][3] = cube[3][1];
	cube[3][1] = temp;
	solution.append("F");
	moveCounter++;
}
void cubeClass::R()
{
	Clockwise(3);
	int temp = cube[0][2];
	cube[0][2] = cube[2][2];
	cube[2][2] = cube[5][2];
	cube[5][2] = cube[4][6];
	cube[4][6] = temp;
	temp = cube[0][3];
	cube[0][3] = cube[2][3];
	cube[2][3] = cube[5][3];
	cube[5][3] = cube[4][7];
	cube[4][7] = temp;
	temp = cube[0][5];
	cube[0][5] = cube[2][5];
	cube[2][5] = cube[5][5];
	cube[5][5] = cube[4][1];
	cube[4][1] = temp;
	solution.append("R");
	moveCounter++;
}
void cubeClass::B()
{
	Clockwise(4);
	int temp = cube[0][0];
	cube[0][0] = cube[3][2];
	cube[3][2] = cube[5][4];
	cube[5][4] = cube[1][6];
	cube[1][6] = temp;
	temp = cube[0][1];
	cube[0][1] = cube[3][3];
	cube[3][3] = cube[5][5];
	cube[5][5] = cube[1][7];
	cube[1][7] = temp;
	temp = cube[0][3];
	cube[0][3] = cube[3][5];
	cube[3][5] = cube[5][7];
	cube[5][7] = cube[1][1];
	cube[1][1] = temp;
	solution.append("B");
	moveCounter++;
}
void cubeClass::D()
{
	Clockwise(5);
	for (int piece = 4; piece <= 5; piece++)
	{
		int temp = cube[4][piece];
		for (int face = 4, next = 3; face >= 2; face--, next--)
		{
			cube[face][piece] = cube[next][piece];
		}
		cube[1][piece] = temp;
	}
	int temp = cube[4][7];
	for (int face = 4, next = 3; face >= 2; face--, next--)
	{
		cube[face][7] = cube[next][7];
	}
	cube[1][7] = temp;
	solution.append("D");
	moveCounter++;
}
void cubeClass::u()
{
	CounterClockwise(0);
	for (int piece = 0; piece <= 1; piece++)
	{
		int temp = cube[4][piece];
		for (int face = 4, next = 3; face >= 2; face--, next--)
		{
			cube[face][piece] = cube[next][piece];
		}
		cube[1][piece] = temp;
	}
	int temp = cube[4][3];
	for (int face = 4, next = 3; face >= 2; face--, next--)
	{
		cube[face][3] = cube[next][3];
	}
	cube[1][3] = temp;
	solution.append("u");
	moveCounter++;
}
void cubeClass::l()
{
	CounterClockwise(1);
	int temp = cube[0][6];
	cube[0][6] = cube[2][6];
	cube[2][6] = cube[5][6];
	cube[5][6] = cube[4][2];
	cube[4][2] = temp;
	temp = cube[0][1];
	cube[0][1] = cube[2][1];
	cube[2][1] = cube[5][1];
	cube[5][1] = cube[4][5];
	cube[4][5] = temp;
	temp = cube[0][7];
	cube[0][7] = cube[2][7];
	cube[2][7] = cube[5][7];
	cube[5][7] = cube[4][3];
	cube[4][3] = temp;
	solution.append("l");
	moveCounter++;
}
void cubeClass::f()
{
	CounterClockwise(2);
	int temp = cube[0][4];
	cube[0][4] = cube[3][6];
	cube[3][6] = cube[5][0];
	cube[5][0] = cube[1][2];
	cube[1][2] = temp;
	temp = cube[0][5];
	cube[0][5] = cube[3][7];
	cube[3][7] = cube[5][1];
	cube[5][1] = cube[1][3];
	cube[1][3] = temp;
	temp = cube[0][7];
	cube[0][7] = cube[3][1];
	cube[3][1] = cube[5][3];
	cube[5][3] = cube[1][5];
	cube[1][5] = temp;
	solution.append("f");
	moveCounter++;
}
void cubeClass::r()
{
	CounterClockwise(3);
	int temp = cube[0][2];
	cube[0][2] = cube[4][6];
	cube[4][6] = cube[5][2];
	cube[5][2] = cube[2][2];
	cube[2][2] = temp;
	temp = cube[0][3];
	cube[0][3] = cube[4][7];
	cube[4][7] = cube[5][3];
	cube[5][3] = cube[2][3];
	cube[2][3] = temp;
	temp = cube[0][5];
	cube[0][5] = cube[4][1];
	cube[4][1] = cube[5][5];
	cube[5][5] = cube[2][5];
	cube[2][5] = temp;
	solution.append("r");
	moveCounter++;
}
void cubeClass::b()
{
	CounterClockwise(4);
	int temp = cube[0][0];
	cube[0][0] = cube[1][6];
	cube[1][6] = cube[5][4];
	cube[5][4] = cube[3][2];
	cube[3][2] = temp;
	temp = cube[0][1];
	cube[0][1] = cube[1][7];
	cube[1][7] = cube[5][5];
	cube[5][5] = cube[3][3];
	cube[3][3] = temp;
	temp = cube[0][3];
	cube[0][3] = cube[1][1];
	cube[1][1] = cube[5][7];
	cube[5][7] = cube[3][5];
	cube[3][5] = temp;
	solution.append("b");
	moveCounter++;
}
void cubeClass::d()
{
	CounterClockwise(5);
	for (int piece = 4; piece <= 5; piece++)
	{
		int temp = cube[1][piece];
		for (int face = 1, next = 2; face <= 3; face++, next++)
		{
			cube[face][piece] = cube[next][piece];
		}
		cube[4][piece] = temp;
	}
	int temp = cube[1][7];
	for (int face = 1, next = 2; face <= 3; face++, next++)
	{
		cube[face][7] = cube[next][7];
	}
	cube[4][7] = temp;
	solution.append("d");
	moveCounter++;
}
void cubeClass::Clockwise(int face)
{
	int temp1 = cube[face][6], temp2 = cube[face][7], old = 7;
	for (int count = 5; old >= 1; old--, count--)
	{
		cube[face][old] = cube[face][count];
	}
	cube[face][0] = temp1;
	cube[face][1] = temp2;
}
void cubeClass::CounterClockwise(int face)
{
	int temp1 = cube[face][0], temp2 = cube[face][1], old = 0;
	for (int count = 2; old <= 6; old++, count++)
	{
		cube[face][old] = cube[face][count];
	}
	cube[face][6] = temp1;
	cube[face][7] = temp2;
}