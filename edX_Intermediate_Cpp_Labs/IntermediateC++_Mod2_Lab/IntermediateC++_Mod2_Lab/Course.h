#pragma once
#include "Student.h"
#include "Teacher.h"

class Course
{
public:
	Course(std::string);

	~Course();

	void AddStudent(Student *newStudent);

	void AddTeacher(Teacher *theTeacher);

	std::string GetCourseName();

	void SetCourseName(std::string);

	std::string GetTeacherName();

	std::string GetStudentNames();

	int GetNumStudents();

	void AlterStudent();

	void AlterTeacher();

	void CloseCourse();

private:
	Student **students;
	Teacher *teacher;
	static int studentCount;
	std::string courseName;
};
