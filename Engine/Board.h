#pragma once
#include"Graphics.h"
#include"Colors.h"
#include"Location.h"

class Board
{
public:


	Board(Graphics& Gfx);

	void DrawCell(Location Loc);


	int GetGridWidth();
	int GetGridHeight();

private:


	Graphics& gfx;

	static constexpr int dimension = 20;

	static constexpr int GridWidth = 10;

	static constexpr int GridHeight = 10;

};