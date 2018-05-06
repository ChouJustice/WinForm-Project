#include "StdAfx.h"
#include "PlayingCard.h"
#include "Deck.h"

PlayingCard::PlayingCard(void)
{
	playingCard = gcnew array<Card^> (10);

	dealCard();

	player_money = 10000;
	player_stake = 0;

	computer_money = 10000;
	computer_stake = 0;
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

void PlayingCard::set_player_money(int x)
{
	player_money = x;
}

void PlayingCard::set_player_stake(int x)
{
	player_stake = x;
}

void PlayingCard::set_computer_money(int x)
{
	computer_money = x;
}

void PlayingCard::set_computer_stake(int x)
{
	computer_stake = x;
}

int PlayingCard::get_player_money()
{
	return player_money;
}

int PlayingCard::get_player_stake()
{
	return player_stake;
}

int PlayingCard::get_computer_money()
{
	return computer_money;
}

int PlayingCard::get_computer_stake()
{
	return computer_stake;
}

