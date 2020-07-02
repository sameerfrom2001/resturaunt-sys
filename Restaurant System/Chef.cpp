#include "Chef.h"

Chef::Chef()
{

}

Chef::Chef(string name, string occupation, int age, double salary, string id, string password)
{
	this->name = name;
	this->occupation = occupation;
	this->age = age;
	this->salary = salary;
	this->id = id;
	this->password = password;
}

string Chef::getSalary()
{
	double ans = salary - (0.5 - salary);
	return to_string(ans);
}

string Chef::GETSalary()
{
	double ans = salary - (0.5 - salary);
	return to_string(ans);
}
