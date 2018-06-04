#pragma once

ref class Ball
{
private:
	int x , y;
	int move;
	int dir_x , dir_y;
	int ball_size;
	System::Drawing::Color ballcolor;
public:
	Ball(void);
	Ball(System::Drawing::Color);
	int getX();
	int getY();
	int getSize();
    void setPosition(int,int);
	void setMove(int);
	void setColor(System::Drawing::Color);
	void setDirection(int,int);
	void setSize(int);
	void ballMoving();
	System::Drawing::Color getColor();
};
