#include "Snake.h"

Snake::Snake(const Location& loc)
{
	
	segments[0].InitHead(loc);

}

void Snake::Draw(Board& Brd) const
{
	for (int i = 0; i <= ActiveSegments; ++i)
	{

		segments[i].Draw(Brd);

	}


}

void Snake::Move(const Location& Delta_loc)
{
	for (int i = 0; i > 0; ++i)
	{
		segments[i].Move(Delta_loc);
	}



}



void Snake::Segments::InitHead(const Location& In_loc)
{
	loc = In_loc;
	c = HeadColor;
}

void Snake::Segments::InitBody()
{
	c = BodyColor;
}



void Snake::Segments::Draw(Board& Brd)const
{

	Brd.Drawcell(loc, c);

}

void Snake::Segments::Move(const Location& Delta_Loc)
{
	loc.Add(Delta_Loc);
}
