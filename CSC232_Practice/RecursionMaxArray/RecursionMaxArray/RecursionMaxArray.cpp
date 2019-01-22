/*
	Recursion program to determine maximum value in array
	CSC232 - Chapter 2 practice
	Created by: Seth A. Griffin
	01/21/2019
*/

#include "pch.h"
#include <iostream>
#include <algorithm>
int MaxArray(int theArray[], int first, int last);

int main()
{
	int numbers[]{ 1,3,5,89,6,8,12 };
	
	// Calculates number of items in array
	int arraySize = sizeof(numbers) / sizeof(numbers[0]);
	std::cout << MaxArray(numbers, 0, arraySize - 1) << std::endl;
	std::cin.get();

}

int MaxArray(int theArray[], int first, int last)
{	
	// If only one item in array
	if (first == last)
	{
		return theArray[first];
	}

	else
	{
		// Calculates mid point in array for next step
		int mid = (first + last) / 2;
		// Passes both halves of array to MaxArray(recursive) 
		return std::max(MaxArray(theArray, first, mid), MaxArray(theArray, mid + 1, last));
	}
}