#include "StdAfx.h"
#include "Goods.h"

Goods::Goods(void)
{
	name = " none ";
	stock = 0;
	price = 0;
}


void Goods::setName(System::String^ n)
{
	name = n;
}

void Goods::setStock(int x)
{
	stock = x;
}

void Goods::setPrice(int x)
{
	price = x;
}

System::String^ Goods::getName()
{
	return name;
}

int Goods::getStock()
{
	return stock;
}

int Goods::getPrice()
{
	return price;
}