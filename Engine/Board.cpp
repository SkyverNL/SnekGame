#include "Board.h"
#include "Colors.h"





Board::Board(Graphics& Gfx)
	:
	gfx( Gfx )

{
} 

void Board::Drawcell(const Location & loc,Color c)
{
	
	gfx.DrawRectDim(loc.x*dimension, loc.y*dimension, dimension, dimension,c);
		
	
}

void Board::DrawBoard(Location& loc)
{
	Drawcell(loc, c);
}



int Board::GetGridWidth()
{
	return GridWidth;
}

int Board::GetGridHeight()
{
	return GridHeight;
}
