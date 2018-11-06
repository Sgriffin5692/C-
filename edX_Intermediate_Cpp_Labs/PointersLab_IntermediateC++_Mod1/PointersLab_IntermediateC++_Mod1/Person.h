#pragma once
#include <string>

class Person
{
private:
	std::string name{};
	int age{};
	double height{};
	double weight{};

public:
	Person();

	Person(std::string _name, int _age, double _height, double _weight);

	std::string GetName();

	void SetName(std::string _name);

	int GetAge();

	void SetAge(int _age);
		
	double GetHeight();
	
	void SetHeight(int _height);

	double GetWeight();

	void SetWeight(int _weight);

	void Display();
};
