#pragma once
#include"Graphics.h"
#include"Location.h"
#include"Colors.h"

class Board
{
public:


	Board(Graphics& Gfx);

	void Drawcell(Location& loc);

	int GetGridWidth();
	int GetGridHeight();

private:


	Graphics& gfx;

	Location loc;


	static constexpr int dimension = 20;

	static constexpr int GridWidth = 10;

	static constexpr int GridHeight = 10;

};