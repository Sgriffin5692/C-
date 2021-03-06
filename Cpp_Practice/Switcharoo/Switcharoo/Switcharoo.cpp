/*	
	Create a function that takes a string and returns a new string with its 
	first and last characters swapped, except under three conditions:

	1. If the length of the string is less than two, return "Incompatible.".
	2. If the argument is not a string, return "Incompatible.".
	3. If the first and last characters are the same, return "Two's a pair.".

	Created by: Seth Griffin
	11/04/2018
	Practice C++: https://edabit.com/challenge/7WrM5GcpzZQwfmMQz 
*/


#include "stdafx.h"
#include <iostream>
#include <string>
std::string Switch(std::string _input);


int main()
{
	std::string input{};
	std::cout << "Please input a string to switch the first and last letters: ";
	getline(std::cin, input);

	std::cout << Switch(input) << std::endl;
	return 0;
}

std::string Switch(std::string _input)
{
	const int size = _input.size();
	// Needs additional index for /0 character
	char *output = new char[size + 1]{};
	
	// Test to see if char is in string
	if (_input.find_first_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos
		&& _input.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos)
	{
		return "Incompatible";
	}
	else if (_input[0] == _input[size - 1] && size > 1)
	{
		return "Two's a pair";
	}
	else if(size < 2)
	{
		return "Incompatible";
	}
	else
	{
		output[0] = _input[size - 1];
		output[size - 1] = _input[0];
		for (int i = 0; i < size - 2; i++)
		{
			output[i+1] = _input[i+1];
		}
	
		return output;
	}
}
