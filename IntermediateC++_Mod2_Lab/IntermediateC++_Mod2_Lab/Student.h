#pragma once
#include <string>
#include <iostream>

class Student
{
public:
	Student();
	
	Student(std::string, std::string, std::string, std::string, std::string);

	void SitInClass();

	std::string GetFirstName();

	void SetFirstName(std::string);

	std::string GetLastName();

	void SetLastName(std::string);

	std::string GetAddress();

	void SetAddress(std::string);

	std::string GetCity();

	void SetCity(std::string);

	std::string GetPhone();

	void SetPhone(std::string);

private:
	std::string firstName;
	std::string lastName;
	std::string address;
	std::string city;
	std::string phone;

};
