#pragma once
#include"Graphics.h"
#include"Location.h"
#include"Colors.h"
#include"Location.h"

class Board
{


public:



	void Drawcell(Location& loc);

	void DrawBoard(Location& loc);

	int GetWidth();
	int GetHeight();


private:


	Graphics& gfx;

	Location loc;

	int testcount = 5;

	int count = 0;

	int dim = 20;

	static constexpr int Width = 10;

	static constexpr int Height = 10;

};