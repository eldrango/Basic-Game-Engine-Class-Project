#pragma once
#include <SDL.h>
class Entity
{
protected:
	SDL_Renderer* renderer;
	float x, y;

public:
	Entity();
	~Entity();

	void setRenderer(SDL_Renderer* renderer);
	float getX();
	float getY();
	void setXY(float x, float y);

	
	virtual void update(float dt);
	virtual void draw();
};

