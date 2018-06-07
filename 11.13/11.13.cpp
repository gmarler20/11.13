#include "stdafx.h"
#include <iostream> 
#include "Course.h"  
using namespace std; 
int main()
{
	Course course1("CS172", 3);
	
	course1.addStudent("Don Johnson");
	course1.addStudent("Danny Bill");
	course1.addStudent("John Apple");

	cout << "The number of students in course 1 is " << course1.getNumberOfStudents() << endl;

	course1.dropStudent(Course &course1);

	// This line is the same as the text book, no need to change it. 
	string* students = course1.getStudents();

	// This line is the same as the code that was provided in the textbook, no need to change it. 
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

}