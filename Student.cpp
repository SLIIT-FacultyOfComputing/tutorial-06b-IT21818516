#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,const char sname[]) {
	studentId = sid;
	strcpy_s(name, sname);

}

// Display StudentId and Name
void Student::display() {
	cout << "Student ID: " << studentId << endl;
	cout << "Name of the student: " << name << endl;

}