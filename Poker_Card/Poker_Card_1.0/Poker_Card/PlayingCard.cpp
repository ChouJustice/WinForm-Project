#include "StdAfx.h"
#include "PlayingCard.h"
#include "Deck.h"

PlayingCard::PlayingCard(void)
{
	playingCard = gcnew array<Card^> (10);

	dealCard();
}

void PlayingCard::dealCard(void)
{
    Deck^ myDeck;
	
	myDeck = gcnew Deck();
	int i;
	for(i=0;i<10;i++)
	{
		playingCard[i] = gcnew Card();
		playingCard[i] = myDeck->dealCard();
	}
}

int PlayingCard::getHandCard(int i)
{
	int s;
	int p;

    s = playingCard[i]->getSuit();
	p = playingCard[i]->getRank();

	return (s-1)*13 + p;
}

int PlayingCard::getRank(int i)
{
	int r;

	r = playingCard[i]->getRank();

	return r;
}

int PlayingCard::getSuit(int i)
{
    int s;

	s = playingCard[i]->getSuit();

	return s;
}

