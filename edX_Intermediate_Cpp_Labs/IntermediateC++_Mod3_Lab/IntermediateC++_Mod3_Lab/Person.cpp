#include "pch.h"
#include "Person.h"

Person::Person() 
{
	age = 0;
	firstName = "N/A";
	lastName = "N/A";
	phone = "000-000-0000";
}

Person::Person(int _age, string _firstName, string _lastName, string _phone)
{
	age = _age;
	firstName = _firstName;
	lastName = _lastName;
	phone = _phone;
}

Person::~Person() {}

void Person::OutputIdentity()
{
	cout << "I am a person." << endl;
}

void Person::OutputAge()
{
	cout << "I am " << age << " years old." << endl;
}

void Person::OutputName()
{
	cout << "My name is " << firstName + " " << lastName + "." << endl;

}