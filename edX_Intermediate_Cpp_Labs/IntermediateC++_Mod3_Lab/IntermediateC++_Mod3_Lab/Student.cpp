#include "pch.h"
#include "Student.h"

Student::Student():Person() {}

Student::Student(int _age, string _firstName, string _lastName, string _phone) : Person(_age, _firstName, _lastName, _phone) {}

Student::~Student() {}

void Student::OutputIdentity()
{
	cout << "I am a student." << endl;
}

void Student::OutputAge()
{
	this->OutputIdentity();
	
	// Calls parent class function
	this->Person::OutputAge();
}
