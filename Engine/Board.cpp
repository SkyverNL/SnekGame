#include "Board.h"
#include "Colors.h"
#include "Location.h"





Board::Board(Graphics & Gfx)
	:
	gfx( Gfx )
{
}

void Board::Drawcell(Location & loc)
{
	
	gfx.DrawRectDim(loc.x*dimension, loc.y*dimension, dimension, dimension, Colors::Red);
		
	
}

void Board::DrawBoard(Location & loc)
{

	Drawcell(loc);
}

int Board::GetGridWidth()
{
	return GridWidth;
}

int Board::GetGridHeight()
{
	return GridHeight;
}
