#pragma once
#include "Card.h"

ref class Deck
{
private:
	array<Card^> ^deck;
	int cardsDealed;
public:
	Deck(void);
	int getCardsDealed(void);
	Card^ dealCard(void);
	void shuffle(void);
};
