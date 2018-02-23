#pragma once
#include "Graphics.h"
#include "Dude.h"

class Poo
{
public: 
	void Init(int in_x, int in_y, int in_x_dir, int in_y_dir);
	void Update();
	void Draw(Graphics& gfx) const;
	void PooCollision(const Dude& dude);
	bool GetIsEaten(); 

private: 
	int x;
	int y;
	const int vel = 1;
	int xdir;
	int ydir;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool isEaten = false;
	bool initialized = false; 
};