#pragma once
#include "pch.h"
#include "Person.h"

class Teacher : public Person
{
public:
	Teacher();

	Teacher(int, string, string, string);

	virtual ~Teacher();

	virtual void OutputIdentity();

	virtual void OutputAge();
};