#pragma once
#include"Graphics.h"
#include"Location.h"

class Board
{
public:


	Board(Graphics& Gfx);

	void Drawcell(const Location& loc,Color c);

	void DrawBoard(Location& loc);


	int GetGridWidth();
	int GetGridHeight();



	void GameBorder(Location& loc);



private:

	Color c;

	Graphics& gfx;



	static constexpr int dimension = 20;

	static constexpr int GridWidth = 40;
	static constexpr int GridHeight = 30;

};