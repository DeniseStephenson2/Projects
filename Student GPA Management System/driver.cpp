// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// Denise Stephenson

# include <iostream>
# include <fstream>
# include <string>
# include <iomanip>
# include "Student.h"

void printInfo(Student s1)
{

	std::cout << s1.getID() << ": " << s1.getGPA() << "   " << s1.getLetterGrade() << std::endl;

}

void swap(Student &x, Student &y) 
{
	Student temp = x;
	x = y;
	y = temp;
}

int main()
{
	std::ifstream inputFile("students.txt");

	std::cout << "****	  Welcome to Dr. R's GPA Calculator Program!  	****" << std::endl;

	if (inputFile.is_open())
    {
    	Student s[30];
        std::string id_;
        double gradePoints_;
        double creditHours_;
        double gpa_;
        char LetterGrade_;
        int count = 0;

        //file is being read
        while (inputFile >> id_ >> gradePoints_ >> creditHours_)
        {	
        	if (creditHours_ > 0)
        	{
                gpa_ = gradePoints_ / creditHours_;
            } 
            else 
            {
                gpa_ = 0.0;
            }
            
            if (gpa_ >= 3.67) 
            {
                LetterGrade_ = 'A';
            } 
            else if (gpa_ >= 2.67) 
            {
                LetterGrade_ = 'B';
            } 
            else if (gpa_ >= 1.67) 
            {
                LetterGrade_ = 'C';
            } 
            else 
            {
                LetterGrade_ = 'D';
            }

            s[count] = Student(id_, gpa_, LetterGrade_);
            count++;
        }

        //fixed makes into exact decimal; setprecision is how many decimal places
        std::cout << std::fixed << std::setprecision(2);

		//bubble sort 	
        for(int i = 0; i < 29; i++)
        {
			for(int j = i + 1; j < 30; j++)
			{
				if(s[i].getGPA() < s[j].getGPA()) 
				{
					swap(s[i], s[j] );
				}
			}
		}

        for (int i = 0; i < count; i++)
       	{
           	printInfo(s[i]);
        }

        inputFile.close();
    }

//example for i/o had it might be useful on grading end idk
	else
	{
		std::cout << "Unable to open file" << std::endl;
	}

	std::cout << "Thank you for using my GPA Calculator Program - goodbye!" << std::endl;

    return 0;
}
