#pragma once
#include"Graphics.h"
#include"Location.h"
#include"Colors.h"

class Board
{


public:

	Board(Graphics& Grap);


	void Drawcell(Location& loc,Color& c);

	void DrawBoard(Location& loc);

	int GetWidth();
	int GetHeight();


private:

	int Color = 200;

	Location loc;
	Graphics& gfx;

	int testcount = 5;

	int count = 0;

	int dim = 20;

	static constexpr int Width = 10;

	static constexpr int Height = 10;

};