#include "stdafx.h"
#include <iostream>  
#include "Course.h" 
using namespace std; 

//PT -- 11/20

Course::Course(const string& courseName, int capacity) {
 numberOfStudents = 0;
	 this->courseName = courseName;
	 this->capacity = capacity;
	 students = new string[capacity];
	 }

// Created with assistance from the textbook, page 468
Course::Course(const Course & course) {
	courseName = course.courseName();
	numberOfStudents = course.numberOfStudents();
	capacity = course.capacity();
	students = new string[capacity];
	
	//PT -- need to copy the students from course to this class
	//  -2
	/*
	for (int i=0; i<course.numberOfStudents; i++) {
		students[i] = course.students[i];
	}
	*/
}


// Destructor
 Course::~Course()
 {
	 delete[] students;
	 }

 string Course::getCourseName() const
 {
	return courseName;
	 }

 void Course::addStudent(const string& name) {
 students[numberOfStudents] = name;
	 numberOfStudents++;

	 //PT -- don't need to allocate a new array unless we're passed capacity
	 //  -1
	 string *x = new string[numberOfStudents];
	 
	 // Makes larger array if the capacity is exceeded. 
	 if (numberOfStudents > capacity) {
		for (int i = 0; i < numberOfStudents; i++)
		{
			x[i] = students[i];
		}
		 //PT -- Once this is done, delete the old students pointer and 
		 //      set students = x so that you are hanging onto the new data
		 // delete[] students;
		 // students = x;
		 // -2
	}
	 //PT -- don't need this else statement
	 else
	 {
		 students[numberOfStudents];
	 }
	
 }

 void Course::dropStudent(const string& name)  {
	 //PT -- search through the array and find the name, and then move 
	 //      all the other students back one slot in the array
	 // -3
	 /*
	 int i=0;
	 while (i < numberOfStudents && students[i] != name)
	 	i++;
	 //Found the student. Move everyone else back one slot
	 while (i < numberOfStudents - 1) {
	 	students[i] = students[i+1];
		i++;
	 }
	 numberOfStudents--;
	 */
	 
	 string array[10];
	 array[10]= name;
	 // Dropping the last student in the course using this loop and accessing the array
	 for (int i = numberOfStudents - 1; i < numberOfStudents + 1; i++)

		 array[i] = "";
		 }
//PT -- you've lost a closing } for this function

//PT -- clear simply removes all students, so it doesn't take a parameter
// -3
/*
void Course::clear() {
	//really, we only need to set numberOfStudent to 0. That means we have no students
	numberOfStudents = 0;
}
*/
 void Course::clear(const string & name) {
	
	 students[100] = name;
	 // Accesses all the student names and makes them blank
	 for (int a = 0; a < numberOfStudents; a++)
	 {
		 students[a] = "";
	}

 }

 string* Course::getStudents() const {
	 return students;
	 }

 int Course::getNumberOfStudents() const
 {
	 return numberOfStudents;
	 }
