#include "Snake.h"

Snake::Snake(const Location& loc)

{
	
	segments[0].InitHead(loc);

	for (int i = 1; i <= ActiveSegments; ++i)
	{

		segments[i].InitBody();

	}

}

void Snake::Draw(Board& Brd) const
{
	for (int i = 0; i <= ActiveSegments; ++i)
	{

		segments[i].Draw(Brd);

		for (int InnerLoop = ActiveSegments; InnerLoop >= 0; --InnerLoop)
		{

			segments[InnerLoop].Draw(Brd);

		}

	}


}


void Snake::Move(const Location& Delta_loc)
{




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

void Snake::Segments::Follow(Segments& snkseg)
{

	snkseg.loc.x;
	snkseg.loc.y;


}

void Snake::Segments::MoveBy(Location& Loc)
{

	

}




void Snake::Segments::Move(const Location& Delta_Loc)
{
	loc.Add(Delta_Loc);
}
