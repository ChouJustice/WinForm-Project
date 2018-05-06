#include "StdAfx.h"
#include "Card.h"

Card::Card(void)
{
	suit = 0;
	rank = 0;
}

void Card::setSuit(int c)
{
	suit = c;
}

void Card::setRank(int p)
{
	rank = p;
}

void Card::setCard(int c, int p)
{
    setSuit(c);
	setRank(p);
}

int Card::getSuit(void)
{
	return suit;
}

int Card::getRank(void)
{
	return rank;
}
