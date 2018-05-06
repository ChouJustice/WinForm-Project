#pragma once
#include "Card.h"

ref class PlayingCard
{
private:
	array<Card^> ^playingCard;
	int player_money;
	int player_stake;
	int computer_money;
	int computer_stake;
public:
	PlayingCard(void);
	void dealCard(void);
	int getHandCard(int);
	int getRank(int);
	int getSuit(int);
	void set_player_money(int);
	void set_player_stake(int);
	void set_computer_money(int);
	void set_computer_stake(int);
	int get_player_money();
	int get_player_stake();
	int get_computer_money();
	int get_computer_stake();
};
