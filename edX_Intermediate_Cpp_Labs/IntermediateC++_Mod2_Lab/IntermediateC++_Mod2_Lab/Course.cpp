#include "stdafx.h"
#include "Course.h"
#include "Student.h"

int Course::studentCount{};

Course::Course(std::string _courseName)
{
	int numStudents{};
	std::cout << "How many students are in the course? ";
	std::cin >> numStudents;
	students = new Student*[numStudents];
	courseName = _courseName;
}

Course::~Course() 
{
	// deallocates memory to pointer array
	delete[] students;
}

void Course::AddStudent(Student *newStudent)
{
	students[studentCount] = newStudent;
	// Displays first name of each student - practice w/ pointers
	//std::cout << students[studentCount]->GetFirstName() << std::endl;
	studentCount++;
}

void Course::AddTeacher(Teacher *theTeacher)
{
	teacher = theTeacher;
}

std::string Course::GetCourseName()
{
	return courseName;
}

void Course::SetCourseName(std::string _courseName)
{
	courseName = _courseName;
}

std::string Course::GetTeacherName()
{
	std::string teacherFullName = (*teacher).GetFirstName() + " " + (*teacher).GetLastName();
	return teacherFullName;
}

std::string Course::GetStudentNames()
{
	std::string studentNames{};
	
	for (int i = 0; i < studentCount; i++)
	{
		if (i < studentCount - 2)
		{
			studentNames += students[i]->GetFirstName() + " " + students[i]->GetLastName() + ", ";
		}
		else if(i == studentCount - 2)
		{
			studentNames += students[i]->GetFirstName() + " " + students[i]->GetLastName() + ", and ";
		}
		else
		{
			studentNames += students[i]->GetFirstName() + " " + students[i]->GetLastName();
		}
	}
	return studentNames;
}

int Course::GetNumStudents()
{
	return studentCount;
}

// Test method to see if pointers were passed successfully
void Course::AlterStudent()
{
	students[0]->SetFirstName("Jeff");
}

// Test method to see if pointer were passed successfully
void Course::AlterTeacher()
{
	(*teacher).SetFirstName("Sarah");
}