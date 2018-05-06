#pragma once
#include "Card.h"

ref class PlayingCard
{
private:
	array<Card^> ^playingCard;
public:
	PlayingCard(void);
	void dealCard(void);
	int getHandCard(int);
	int getRank(int);
	int getSuit(int);
};
