#pragma once
#include <iostream>
#include <string>
using namespace std;
class Staff{
public:
	Staff();
	Staff(string name, string occupation, int age, double salary, string id, string password);
	void setName(string name);
	void setOccuption(string occupation);
	void setAge(int age);
	void setSalary(double salary);
	void setID(string id);
	void setPassword(string password);
	//values will be returned as string because Windows Form only accepts I/O in strings
	virtual string getSalary() = 0;
	string getName();
	string getOccupation();
	string getAge();
	string getBaseSalary();
	string getID();
	string getPassword();



protected:
	string name;
	string occupation;
	int age;
	double salary;
	string id;
	string password;


};

