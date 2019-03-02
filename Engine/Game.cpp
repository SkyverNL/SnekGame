/******************************************************************************************
 *	Chili DirectX Framework Version 16.07.20											  *
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "Colors.h"


Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd)
	

	
	
{
}

void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{


	
}

void Game::ComposeFrame()
{

	for (int i = 0; i <= 29; y = dim * i, ++i)
	{
		
		for (int i = 0; i <= 39 ;x = dim * i, i++)
		{

			//raster drawing code
			//gfx.DrawRectDim(x, y, dim, dim, Colors::Black);// bloks 

			//gfx.DrawRectDim(x, y, 1, dim, Colors::LightGray); //border vertical

			//gfx.DrawRectDim(1, y, 799, 1, Colors::LightGray);// border horizontal

		}

	}

}