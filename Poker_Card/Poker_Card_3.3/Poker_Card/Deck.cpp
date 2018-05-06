#include "StdAfx.h"
#include "Deck.h"
#include "time.h"
#include <stdio.h>
#include <stdlib.h>

Deck::Deck(void)
{
	deck = gcnew array<Card^> (52);

	for(int i=0;i < deck->Length;i++)
	{
		deck[i] = gcnew Card();
		deck[i]->setRank( (i % 13) + 1 );
		deck[i]->setSuit( (i / 13) + 1 );
	}
    cardsDealed = 0;

	shuffle();
}

void Deck::shuffle()
{
	srand ((unsigned int)time(NULL));

	for(int i = 0; i<deck->Length;i++)
	{
		int num = rand() % 52;
		Card ^t = gcnew Card();

		t = deck[i];
		deck[i] = deck[num];
		deck[num] = t;
	}
}

Card^ Deck::dealCard()
{
//	if(cardsDealed >= 52)
//	{

//	}
	cardsDealed++;

	return deck[cardsDealed - 1];
}

int Deck::getCardsDealed(void)
{
	return cardsDealed;
}
