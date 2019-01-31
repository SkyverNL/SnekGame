#include "Board.h"
#include "Colors.h"


Board::Board(Graphics & Grap)
	:
	gfx(gfx)
{
}

void Board::DrawBoard(Location & loc)
{
	
		Drawcell(loc);
	
}

int Board::GetWidth()
{
	return Width;
}

int Board::GetHeight()
{
	return Height;
}
