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
		void Follow(Segments& Next);
		void MoveBy(const Location& Delta_loc);


		

	private:
		
		Location loc;
		Color c;

	};

public:

	Snake(const Location& loc);
	

	void Draw(Board& Brd)const;
	void MoveBy( const Location& Delta_loc);
	void Grow();

private:

	

	static constexpr Color HeadColor = Colors::Yellow;
	static constexpr Color BodyColor = Colors::Green;
	static const int MaxSegments = 100;

	Segments segments[MaxSegments];

	int ActiveSegments = 1;



};
