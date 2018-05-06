#pragma once

ref class Goods
{
private:
	System::String^ name;
	int stock;
	int price;
public:
	Goods(void);
	void setName(System::String^);
	void setStock(int);
	void setPrice(int);
	System::String^ getName();
	int getStock();
	int getPrice();
};
