#include "Puzzle.h"

Puzzle::Puzzle()
{
}

Puzzle::~Puzzle()
{
}

string Puzzle::GetSolution() const
{
	return m_sSolution;
}

int Puzzle::GetMoveCount() const
{
	return m_iMoveCount;
}
