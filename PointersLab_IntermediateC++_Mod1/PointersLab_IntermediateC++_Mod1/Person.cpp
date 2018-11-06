#include "stdafx.h"
#include "Person.h"
#include <iostream>
#include <iomanip>

	Person::Person() {}

	Person::Person(std::string _name, int _age, double _height, double _weight)
	{
		name = _name;
		age = _age;
		height = _height;
		weight = _weight;
	}

	std::string Person::GetName()
	{
		return name;
	}

	void Person::SetName(std::string _name)
	{
		name = _name;
	}

	int Person::GetAge()
	{
		return age;
	}

	void Person::SetAge(int _age)
	{
		age = _age;
	}

	double Person::GetHeight()
	{
		return height;
	}

	void Person::SetHeight(int _height)
	{
		height = _height;
	}

	double Person::GetWeight()
	{
		return weight;
	}

	void Person::SetWeight(int _weight)
	{
		weight = _weight;
	}

	void Person::Display()
	{
		if (name != "")
		{
			std::cout.precision(1);
			std::cout << "Name: " + name << std::endl;
			std::cout << "Age: " + std::to_string(age) << std::endl;
			std::cout << "Weight: " << std::fixed << weight << " pounds" << std::endl;
			std::cout << "Height: " << height << " inches" << std::endl;
			std::cout << std::endl;
		}	
	}
