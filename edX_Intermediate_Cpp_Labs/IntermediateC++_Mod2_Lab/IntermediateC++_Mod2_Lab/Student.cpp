#include "stdafx.h"
#include "Student.h"


Student::Student() {}

Student::Student(std::string _firstName, std::string _lastName, std::string _address, std::string _city, std::string _phone)
{
	firstName = _firstName;
	lastName = _lastName;
	address = _address;
	city = _city;
	phone = _phone;
}

void Student::SitInClass()
{
	std::cout << "Sitting in main theater." << std::endl;
}

std::string Student::GetFirstName()
{
	return firstName;
}

void Student::SetFirstName(std::string _firstName)
{
	firstName = _firstName;
}

std::string Student::GetLastName()
{
	return lastName;

}
void Student::SetLastName(std::string _lastName)
{
	lastName = _lastName;
}

std::string Student::GetAddress()
{
	return address;
}

void Student::SetAddress(std::string _address)
{
	address = _address;
}

std::string Student::GetCity()
{
	return city;
}

void Student::SetCity(std::string _city)
{
	city = _city;
}

std::string Student::GetPhone()
{
	return phone;
}

void Student::SetPhone(std::string _phone)
{
	phone = _phone;
}




