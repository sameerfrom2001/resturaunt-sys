#pragma once
#include <iostream>
#include <string>
using namespace std;
class Food{
public:
	Food();
	Food(string name,float price,int quantity);
	void setName(string name);
	void setPrice(float price);
	void setQuantity(int quantity);
	string getName();
	string getPriceAsString();
	string getQuantityAsString();
	float getPrice();
	int getQuantity();


protected:
	string name;
	float price;
	int quantity;
};

