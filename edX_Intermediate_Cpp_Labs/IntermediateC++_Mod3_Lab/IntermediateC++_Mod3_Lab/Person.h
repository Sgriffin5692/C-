#pragma once
#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

class Person
{
protected:
	int age;
	std::string firstName;
	std::string lastName;

private:
	std::string phone;

public:
	
	Person();

	Person(int, string, string, string);

	virtual ~Person();
	
	virtual void OutputIdentity() = 0;

	virtual void OutputAge();

	virtual void OutputName();
};
