#include "StdAfx.h"
#include "Ball.h"

Ball::Ball(void)
{
	x = 100;
	y = 100;
	ball_size = 50;
	dir_x = 1;
	dir_y = 1;
	ballcolor = System::Drawing::Color::Red;
	move = 3;
}

Ball::Ball(System::Drawing::Color c1)
{
    x = 100;
	y = 100;
	ball_size = 50;
	dir_x = 1;
	dir_y = 1;
	ballcolor = c1;
	move = 3;
}

int Ball::getX()
{
	return x;
}

int Ball::getY()
{
	return y;
}

int Ball::getSize()
{
	return ball_size;
}

void Ball::setPosition(int x1, int y1)
{
	x = x1;
	y = y1;
}

void Ball::setMove(int move1)
{
	move = move1;
}

void Ball::setColor(int i)
{
	System::Random^ rand = gcnew System::Random((i+1) * (int)System::DateTime::Now::get().Millisecond);
	int red = rand->Next(0,255);
	int green = rand->Next(0,255);
	int blue = rand->Next(0,255);
	ballcolor = System::Drawing::Color::FromArgb(red,green,blue);
}

void Ball::setDirection(int dirx1, int diry1)
{
	dir_x = dirx1;
	dir_y = diry1;
}

void Ball::setSize(int size1)
{
	ball_size = size1;
}

void Ball::ballMoving()
{
	int new_x , new_y;

	new_x = x + move * dir_x;
	new_y = y + move * dir_y;

	if(new_x > (600 - ball_size)) dir_x = -1 * dir_x;
	if(new_x <= 0) dir_x = -1 * dir_x;
	if(new_y > (400 - ball_size)) dir_y = -1 * dir_y;
	if(new_y <= 0) dir_y = -1 * dir_y;

	x = new_x;
	y = new_y;
}

System::Drawing::Color Ball::getColor()
{
	return ballcolor;
}
