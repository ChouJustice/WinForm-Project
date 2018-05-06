#include "StdAfx.h"
#include "Machine.h"

Machine::Machine(void)
{
	Sale_goods = gcnew array<Goods^> (10);
	money = 0;
	balance = 0;
}

void Machine::setMoney(int x)
{
	money = x;
}

void Machine::setBalance(int x)
{
	balance = x;
}

void Machine::plus_10()
{
	money = money + 10;
}

void Machine::plus_50()
{
	money = money + 50;
}

void Machine::plus_100()
{
	money = money + 100;
}

void Machine::setName(int i, System::String ^ n)
{
	Sale_goods[i]->setName(n);
}

void Machine::setStock(int i, int x)
{
	Sale_goods[i]->setStock(x);
}

void Machine::setPrice(int i, int x)
{
	Sale_goods[i]->setPrice(x);
}

System::String^ Machine::getName(int i)
{
	return Sale_goods[i]->getName();
}

int Machine::getStock(int i)
{
	return Sale_goods[i]->getStock();
}

int Machine::getPrice(int i)
{
	return Sale_goods[i]->getPrice();
}

int Machine::getMoney()
{
	return money;
}

int Machine::getBalance()
{
	return balance;
}

void Machine::machine_initialization()
{
	int i;
	for(i=0;i<10;i++)
	{
		Sale_goods[i] = gcnew Goods();
		setStock(i,3);
		setPrice(i,i*10+10);
	}
}

