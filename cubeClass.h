#if !defined CUBECLASS_H
#define CUBECLASS_H
#include <string>
class cubeClass
{
public:
	cubeClass(std::string scramble);
	void Solve();
	std::string RobotSolution(); //outputs the solution to the robot
	std::string UserSolution(); //outputs the solution to the user
	void Show(); //shows the state of the cube, for testing purposes only
	int GetError();
	int GetMoveCount();
	void U();
	void L();
	void F();
	void R();
	void B();
	void D();
	void u();
	void l();
	void f();
	void r();
	void b();
	void d();
private:
	void Clockwise(int face);
	void CounterClockwise(int face);
	std::string solution;
	int error{ 0 };
	int moveCounter{ 0 };	//counts the amount off moves used for the solve
	int moveArray[6];	//stores the movecount after a step has been completed
	int cube[6][9]{ {16,13,17,14,18,15,19,20,0} , {21,22,23,24,25,26,27,28,29} , {31,32,10,34,35,36,9,38,39} , {41,42,43,44,45,46,47,48,49} , {51,52,12,54,55,56,11,58,59} , {1,5,2,6,3,7,4,8,60} };
	//0 = white/up, 1 = green/left, 2 = red/front, 3 = blue/right, 4 = orange/back, 5 = yellow/down
	//even = edges, odd = corners, 8 = center
};
#endif