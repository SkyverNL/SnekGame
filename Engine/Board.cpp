#include "Board.h"
#include "Colors.h"






Board::Board(Graphics & Gfx)
	:
	gfx( Gfx )

{
}


void Board::DrawCell(Location Loc)
{

	gfx.DrawRectDim(Loc.x * dimension, Loc.y * dimension, dimension, dimension, Colors::Green);


}




int Board::GetGridWidth()
{
	return GridWidth;
}

int Board::GetGridHeight()
{
	return GridHeight;
}
