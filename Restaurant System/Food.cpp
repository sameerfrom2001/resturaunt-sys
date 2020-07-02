#include "Food.h"

Food::Food()
{
	name = "";
	price = 0.0f;
	quantity = 1;
}

Food::Food(string name, float price, int quantity)
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;
}

void Food::setName(string name)
{
	this->name = name;
}

void Food::setPrice(float price)
{
	this->price = price;
}

void Food::setQuantity(int quantity)
{
	this->quantity = quantity;
}

string Food::getName()
{
	return name;
}

string Food::getPriceAsString()
{
	return to_string(price);
}

string Food::getQuantityAsString()
{
	return to_string(quantity);
}

float Food::getPrice()
{
	return price;
}

int Food::getQuantity()
{
	return quantity;
}
