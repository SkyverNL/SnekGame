#include "Board.h"
#include "Colors.h"
#include "Location.h"





void Board::Drawcell(Location & loc)
{//draw rect with x & y cordinates
	gfx.DrawRectDim(loc.X, loc.Y, dim, dim, Colors::Red);
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
