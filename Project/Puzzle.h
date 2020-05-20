#if  !defined PUZZLE_H
#define PUZZLE_H

#include <string>
using std::string;

class Puzzle
{
public:
	Puzzle();
	~Puzzle();

	virtual void Scramble(const string& rScramble) = 0;
	virtual void Solve() = 0;

	virtual void Show() = 0;	//displays the state of the puzzle, only for testing purposes

	string GetSolution() const;
	int GetMoveCount() const;

protected:
	string m_sSolution;
	int m_iMoveCount{ 0 };
};

#endif