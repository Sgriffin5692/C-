#pragma once
#include <string>
#include <iostream>

class Teacher
{
public:
	Teacher();

	Teacher(std::string, std::string, std::string, std::string, std::string);

	~Teacher();

	void SitInClass();

	void GradeStudent();

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