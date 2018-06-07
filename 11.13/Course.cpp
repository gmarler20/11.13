#include "stdafx.h"
#include <iostream>  
#include "Course.h" 
using namespace std; 

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

	 string *x = new string[numberOfStudents];
	 
	 // Makes larger array if the capacity is exceeded. 
	 if (numberOfStudents > capacity) {
		for (int i = 0; i < numberOfStudents; i++)
		{
			x[i] = students[i];
		}
	}
	 else
	 {
		 students[numberOfStudents];
	 }
	
 }

 void Course::dropStudent(const string& name)  {
	 
	 string array[10];
	 array[10]= name;
	 // Dropping the last student in the course using this loop and accessing the array
	 for (int i = numberOfStudents - 1; i < numberOfStudents + 1; i++)

		 array[i] = "";
		 }

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