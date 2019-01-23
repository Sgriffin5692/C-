/*
	Created by: Seth Griffin
	11/18/2018
	This is the edX Intermediate C++ Lab for Module 3
*/
#include "pch.h"
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <iostream>

int main()
{
	Student seth{ 25, "Seth", "Griffin", "435-213-9876" };

	seth.OutputName();
	seth.OutputIdentity();
	seth.OutputAge();
}
