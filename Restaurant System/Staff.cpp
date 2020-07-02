#include "Staff.h"


Staff::Staff()
{

}
Staff::Staff(string name, string occupation, int age, double salary, string id, string password) {
	this->name = name;
	this->occupation = occupation;
	this->age = age;
	this->salary = salary;
	this->id = id;
	this->password = password;
}

void Staff::setName(string name)
{
	this->name = name;
}

void Staff::setOccuption(string occupation)
{
	this->occupation = occupation;
}

void Staff::setAge(int age)
{
	this->age = age;
}

void Staff::setSalary(double salary)
{
	this->salary = salary;
}

void Staff::setID(string id)
{
	this->id = id;
}

void Staff::setPassword(string password)
{
	this->password = password;
}

string Staff::getName()
{
	return name;
}

string Staff::getOccupation()
{
	return occupation;
}

string Staff::getAge()
{
	return to_string(age);
}

string Staff::getBaseSalary()
{
	return to_string(salary);
}

string Staff::getID()
{
	return id;
}

string Staff::getPassword()
{
	return password;
}