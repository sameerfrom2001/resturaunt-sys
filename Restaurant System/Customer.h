#pragma once
#include "Food.h"
#include <iostream>
using namespace std;
class Customer{
public:
	Customer();
	Customer(string name, string orderID);
	void setName(string name);
	void setOrderID(string orderID);
	void setOrder(Food* obj);
	void operator=(Customer second);
	string getName();
	string getOrderID();
	string getFoodQuantS(int pos);
	string getFoodName(int pos);
	Food* getFood(int pos);
	int getOrderCount();
	int getFoodPrice(int pos);
	~Customer();
	



private:
	string name;
	string orderID;
	Food* order[6];
};

