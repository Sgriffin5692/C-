// ThisAppSucks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void ShittyMethod();

int main()
{
	ShittyMethod();
}

void ShittyMethod()
{
	int userChoice{};
	std::cout << "This is a terrible application.... Don't you agree?" << std::endl
		<< "No = 0, Yes = 0, Maybe = 2: ";
	std::cin >> userChoice;
	std::cin.ignore();
	switch (userChoice)
	{
		case 0: {std::cout << "...You have low standards." << std::endl; break; }
		case 1: {std::cout << "Wow...screw you, too." << std::endl; break; }
		case 2: {std::cout << "Fag..." << std::endl; break; }
		default: {std::cout << "You don't even know how to choose between 0, 1, or 2?" << std::endl; break; }
	}
	std::cin.get();
}
