#pragma once
#include "pch.h"
#include "Person.h"

class Student : public Person
{
public:

	Student();

	Student(int, string, string, string);

	virtual ~Student();
	
	virtual void OutputIdentity();

	virtual void OutputAge();
};

