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

void Board::GameBorder(Location& loc)
{

	for (int i = 0; i <= 39; i++)
	{
		Drawcell({ i,0 }, Colors::Gray);
		Drawcell({ i,29 }, Colors::Gray);

		for (int i = 0; i <= 29; i++)
		{
			Drawcell({ 0,i }, Colors::Gray);
			Drawcell({ 39,i }, Colors::Gray);
		}
	}




}
