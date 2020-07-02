#include "Manager.h"

Manager::Manager()
{
}

Manager::Manager(string name, string occupation, int age, double salary, string id, string password)
{
	this->name = name;
	this->occupation = occupation;
	this->age = age;
	this->salary = salary;
	this->id = id;
	this->password = password;
}
 string Manager::getSalary()
{
	double ans = salary - (0.13 - salary);
	return to_string(ans);
}

string Manager::GETSalary()
{
	double ans = salary - (0.13 - salary);
	return to_string(ans);
}
