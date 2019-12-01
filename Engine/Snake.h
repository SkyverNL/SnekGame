#pragma once
#include"Board.h"


class Snake 
{
	class Segments
	{
	public:

		void InitHead(const Location& In_loc);
		void InitBody();

		void Move(const Location& Delta_Loc);
		void Draw(Board& Brd)const;
	private:

		Location loc;
		Color c;
	};

public:

	Snake(const Location& loc);
	

	void Move(const Location& Delta_loc);
	void Draw(Board& Brd)const;

private:



	static constexpr Color HeadColor = Colors::Yellow;
	static constexpr Color BodyColor = Colors::Green;
	static const int MaxSegments = 100;

	Segments segments[MaxSegments];

	int ActiveSegments = 0;



};
