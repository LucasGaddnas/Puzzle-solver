#if !defined CUBIC_H
#define CUBIC_H
#include "Puzzle.h"

class Cube : public Puzzle
{
public:
	virtual void Show();

	virtual void U() = 0;
	virtual void R() = 0;
	virtual void F() = 0;
	virtual void L() = 0;
	virtual void B() = 0;
	virtual void D() = 0;
};

#endif