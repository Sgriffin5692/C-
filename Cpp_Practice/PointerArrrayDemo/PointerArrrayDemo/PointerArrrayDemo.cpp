/*
	Created by: Seth Griffin
	11/05/2018
	This program demos an array of pointers.
*/

#include "stdafx.h"
#include <iostream>

int main()
{
	// Initialize array of pointers
	int **value = new int*[2];
	int test = 12;
	// Assigns address of test
	value[0] = &test;

	// Displays address value points to
	std::cout << value << std::endl;
	// Displays address value[0] points to
	std::cout << value[0] << std::endl;
	// Displays dereferenced integer than value[0] points to the address of
	std::cout << *value[0] << std::endl;
	
	return 0;
}

