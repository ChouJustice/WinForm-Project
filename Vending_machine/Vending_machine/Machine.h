#pragma once
#include "Goods.h"

ref class Machine
{
private:
	array<Goods^> ^Sale_goods;
	int money;
	int balance;
public:
	Machine(void);
	void setMoney(int);
	void setBalance(int);
	void plus_100();
	void plus_50();
	void plus_10();
	void machine_initialization(void);
	void setName(int,System::String^);
	void setStock(int,int);
	void setPrice(int,int);
	System::String^ getName(int);
	int getStock(int);
	int getPrice(int);
	int getMoney();
	int getBalance();
};
