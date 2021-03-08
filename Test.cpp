#include <iostream>

using namespace std;

class Student {
	char name[50];
	int rollNo;
	int marks;
	public:
	void setStudentData();
	void getStudentData();
};

void Student::setStudentData() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter roll number: ";
		cin >> rollNo;
		cout << "Enter marks: ";
		cin >> marks;
	}
void Student::getStudentData() {
	cout << "Details of student are:\n";
	cout << name << endl << rollNo << endl << marks << endl;
}
int main () {
	
	Student studentsArr[3];
	for (int i=0; i<3; i++) {
		cout << "Enter details of student " << i+1 << endl;
		studentsArr[i].setStudentData();
	}
	cout << "\n\n";
	
	for (int i=0; i<3; i++) 
		studentsArr[i].getStudentData();
	
	return 0;
}
