#include "Customer.h"

Customer::Customer()
{
	for (int i = 0;i < 6;i++) {
		order[i] = 0;
	}
}

Customer::Customer(string name, string orderID)
{
	this->name = name;
	this->orderID = orderID;
	for (int i = 0;i < 6;i++) {
		order[i] = 0;
	}
}

void Customer::setName(string name)
{
	this->name = name;
}

void Customer::setOrderID(string orderID)
{
	this->orderID = orderID;
}

void Customer::setOrder(Food* obj)
{
	int i = 0;
	while (order[i] != 0) {
		i++;
	}
	order[i] = obj;
}

void Customer::operator=(Customer second)
{
	name = second.name;
	orderID = second.orderID;
	for (int i = 0;i < 6;i++) {
		order[i] = second.order[i];
	}
}

string Customer::getName()
{
	return name;
}

string Customer::getOrderID()
{
	return orderID;
}

string Customer::getFoodQuantS(int pos)
{
	return order[pos]->getQuantityAsString();
}

string Customer::getFoodName(int pos)
{
	string ans =  order[pos]->getName();
	return ans;
}

Food* Customer::getFood(int pos)
{
	return order[pos];
}

int Customer::getOrderCount()
{
	int i = 0;
	while (order[i] != 0) { i++; }
	return i;
}

int Customer::getFoodPrice(int pos)
{
	return order[pos]->getPrice();
}

Customer::~Customer()
{
}
