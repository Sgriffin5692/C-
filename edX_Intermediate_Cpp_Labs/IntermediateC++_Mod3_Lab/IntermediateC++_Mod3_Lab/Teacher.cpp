#include "pch.h"
#include "Teacher.h"

Teacher::Teacher():Person() {}

Teacher::Teacher(int _age, string _firstName, string _lastName, string _phone) : Person(_age, _firstName, _lastName, _phone) {}

Teacher::~Teacher() {}

void Teacher::OutputIdentity()
{
	cout << "I am a teacher." << endl;
}

void Teacher::OutputAge()
{
	this->OutputIdentity();
	this->Person::OutputAge();
}