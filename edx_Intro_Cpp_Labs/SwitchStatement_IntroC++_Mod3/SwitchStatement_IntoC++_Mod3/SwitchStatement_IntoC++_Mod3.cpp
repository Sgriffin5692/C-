/*
	Created by: Seth Griffin
	10/17/2018
	The purpose of this program is to practice switch statements - (edX Intro to C++: Module 3)
*/

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char choice = 'y';
	switch (choice)
	{
		case 'y':
		case 'Y': cout << "You chose y or Y." << endl; break;
		case 'n':
		case 'N': cout << "You chose n or N." << endl; break;
		default: cout << "You didn't choose a valid option." << endl; break;
	}
	cin.ignore();
    return 0;
}

