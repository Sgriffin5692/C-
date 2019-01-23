#include "stdafx.h"
#include "Teacher.h"


Teacher::Teacher() {}

Teacher::Teacher(std::string _firstName, std::string _lastName, std::string _address, std::string _city, std::string _phone)
{
	firstName = _firstName;
	lastName = _lastName;
	address = _address;
	city = _city;
	phone = _phone;
}

Teacher::~Teacher() {}

void Teacher::SitInClass()
{
	std::cout << "Sitting at front of class." << std::endl;
}

void Teacher::GradeStudent()
{
	std::cout << "Student graded." << std::endl;
}

std::string Teacher::GetFirstName()
{
	return firstName;
}

void Teacher::SetFirstName(std::string _firstName)
{
	firstName = _firstName;
}

std::string Teacher::GetLastName()
{
	return lastName;

}
void Teacher::SetLastName(std::string _lastName)
{
	lastName = _lastName;
}

std::string Teacher::GetAddress()
{
	return address;
}

void Teacher::SetAddress(std::string _address)
{
	address = _address;
}

std::string Teacher::GetCity()
{
	return city;
}

void Teacher::SetCity(std::string _city)
{
	city = _city;
}

std::string Teacher::GetPhone()
{
	return phone;
}

void Teacher::SetPhone(std::string _phone)
{
	phone = _phone;
}
