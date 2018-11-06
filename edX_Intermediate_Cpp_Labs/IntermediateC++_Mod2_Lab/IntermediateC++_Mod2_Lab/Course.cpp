#include "stdafx.h"
#include "Course.h"
#include "Student.h"

int Course::studentCount{};

Course::Course()
{
	int numStudents{};
	std::cout << "How many students are in the course? ";
	std::cin >> numStudents;
	students = new Student*[numStudents];
}

void Course::AddStudent(Student *newStudent)
{
	students[studentCount] = newStudent;
	std::cout << students[studentCount]->GetFirstName() << std::endl;
	studentCount++;
}

// Test method to see if references were passed successfully
void Course::AlterStudent()
{
	students[0]->SetFirstName("Jeff");
}