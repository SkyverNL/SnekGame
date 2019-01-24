#pragma once
#include"Graphics.h"
#include"Location.h"
#include"Colors.h"

class Board
{


public:

	Board(Graphics& Grap);


	void Drawcell(Location& loc);

	int GetWidth();
	int GetHeight();


private:

	int Color = 0;

	Location loc;
	Graphics& gfx;

	static constexpr int Dimensions = 20;

	static constexpr int Width = 10;

	static constexpr int Height = 10;

};