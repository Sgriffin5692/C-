/*
	Created by: Seth Griffin
	11/05/2018
	This program is Lab 2 for edX Intermediate C++.
*/

#include "stdafx.h"
#include "Student.h"
#include "Course.h"


int main()
{
	Student student1{ "Seth", "Griffin", "214 Pickett's Mill Run", "Acworth, GA", "123-456-7890" };
	Student student2{ "Billy", "Bob", "816 N. Main St", "Pittsburgh, PA", "987-654-3210" };
	Student student3{ "Bobby", "Lee", "578 S. Dino Ave", "Natchez, MS", "326-376-9876" };
	Teacher teacher1{ "Rebecca", "Gooding", "345 N. Plantation Rd", "Athens, AL", "548-325-6732" };
	Course course1{"Intermediate C++"};

	// Pass addresses of student and teacher objects
	course1.AddStudent(&student1);
	course1.AddStudent(&student2);
	course1.AddStudent(&student3);
	course1.AddTeacher(&teacher1);

	std::cout << course1.GetCourseName() << " is taught by " << course1.GetTeacherName() <<
			     " and has " << course1.GetNumStudents() << " students." << std::endl;

	std::cout << "The student's names are: " << course1.GetStudentNames() << "." << std::endl;

	return 0;
}

