#pragma once
#include "Staff.h"
class Manager : public Staff{
public:
	Manager();
	Manager(string name, string occupation, int age, double salary, string id, string password);
	virtual string getSalary();
	string GETSalary();
};

