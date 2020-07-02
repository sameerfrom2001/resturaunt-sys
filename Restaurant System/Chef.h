#pragma once
#include "Staff.h"
#include <string>
class Chef : public Staff{
public:
	Chef();
	Chef(string name, string occupation, int age, double salary, string id, string password);
	string getSalary();
	string GETSalary();
};

