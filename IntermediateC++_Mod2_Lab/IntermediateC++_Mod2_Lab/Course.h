#pragma once
#include "Student.h"

class Course
{
public:
	Course();

	void AddStudent(Student *newStudent);

	void AlterStudent();

private:
	Student **students;
	static int studentCount;
};
