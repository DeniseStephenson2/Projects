// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// Denise Stephenson

# include "Student.h"
# include <string>

Student::Student()
{
	id_ = "";
	gpa_ = 0.0;
	LetterGrade_ = ' ';
}

Student::Student(std::string id, double gpa, char LetterGrade)
{
	id_ = id;
	gpa_ = gpa;
	LetterGrade_ = LetterGrade;
}

Student::~Student()
{
	
}

std::string Student:: getID()
{
	return id_;
}

int Student::getGradePoints()
{
	return gradePoints_;
}

int Student::getCredit()
{
	return creditHours_;
}

double Student::getGPA()
{
	return gpa_;
}

char Student::getLetterGrade()
{
	return LetterGrade_;
}

