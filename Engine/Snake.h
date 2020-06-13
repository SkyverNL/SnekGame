#pragma once
#include"Board.h"


class Snake 
{
	class Segments
	{
	public:

		void InitHead(const Location& In_loc);
		void InitBody();

		void Draw(Board& Brd)const;
		void Follow(const Segments& Next);
		void MoveBy(const Location& Delta_loc);


		


	
		
		Location loc;
		Color c;

	};

public:

	Snake(const Location& Loc);
	
	void ScreenBorderX(Location& loc);
	void ScreenBorderY(Location& loc);
	void Draw(Board& Brd)const;
	void MoveBy( const Location& Delta_loc);
	void Grow();
	bool DedSnake = false;

	

private:

	static const int MaxSegments = 100;

	Segments segments[MaxSegments];

	static constexpr Color HeadColor = Colors::Yellow;
	static constexpr Color BodyColor = Colors::Green;
	


	int ActiveSegments = 1;



};
