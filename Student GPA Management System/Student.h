// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// Denise Stephenson

# include <string>

class Student
{
	public:
		Student();
		Student(std::string id, double gpa, char LetterGrade);
		~Student();
		std::string getID();
		int getGradePoints();
		int getCredit();
		double getGPA();
		char getLetterGrade();

	private:
		std::string id_;
		int gradePoints_;
		int creditHours_;
		double gpa_;
		char LetterGrade_;
};