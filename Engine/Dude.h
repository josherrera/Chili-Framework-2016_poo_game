#pragma once
#include "Graphics.h"
#include "MainWindow.h"

class Dude 
{
public: 
	void Draw(Graphics& gfx) const; 
	void EnableMove(MainWindow& wnd); 
	int GetX() const;
	int GetY() const; 
	static int GetHeight();
	static int GetWidth();

private: 
	int x = 400;
	int y = 300;
	static constexpr int vel = 5;
	static constexpr int width = 20;
	static constexpr int height = 20;
};
