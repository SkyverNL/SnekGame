#include "Snake.h"
#include <assert.h>

Snake::Snake(const Location& loc)// default pos start head
{
	
	segments[0].InitHead(loc);

}

void Snake::Draw(Board& Brd) const// drawing evry segment
{
	for (int i = 0; i < ActiveSegments; ++i)
	{
		segments[i].Draw(Brd);
	}


}

void Snake::MoveBy(const Location& Delta_loc)// the segment follows the one in front of it
{
	for (int i = ActiveSegments - 1; i > 0; --i)
	{
		segments[i].Follow(segments[i - 1]);
	}

	segments[0].MoveBy(Delta_loc);
}

void Snake::Grow()  // increaces max active segments//and activates init body on the last segment
{

	if (ActiveSegments < MaxSegments)
	{
		segments[ActiveSegments].InitBody();
		++ActiveSegments;
	}



}



void Snake::Segments::InitHead(const Location& In_loc)// init head color and pos
{
	loc = In_loc;
	c = Snake::HeadColor;
}

void Snake::Segments::InitBody()     //body color
{
	c = Snake::BodyColor;
}



void Snake::Segments::Draw(Board& Brd)const// drawing the current segment to the board
{

	Brd.Drawcell(loc, c);

}

void Snake::Segments::Follow(const Segments& Next)//gives the pos of the next segment to the one behind it
{

	loc = Next.loc;


}

void Snake::Segments::MoveBy(const Location& Delta_loc)//head control for player pass on
{
	assert(abs(Delta_loc.x) + abs(Delta_loc.y) == 1);
	loc.Add(Delta_loc);

}

void Snake::ScreenBorderX(Location& loc )
{
	if (Snake::segments[0].loc.x <= 0)
	{

		Snake::DedSnake = true;
	}
	else if
	(Snake::segments[0].loc.x >= 39)
	{
		Snake::DedSnake = true;
	}
}

void Snake::ScreenBorderY(Location& loc)
{
	if (Snake::segments[0].loc.y <= 0)
	{

		Snake::DedSnake = true;
	}
	else if
	(Snake::segments[0].loc.y >= 29)
	{
		Snake::DedSnake = true;
	}
}




