#include <iostream>

using namespace std;

struct Student {
	char name[50];
	int rollNo;
	int marks;
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
	cout << name << endl << rollNo << endl << marks << endl;
}
int main () {
	
	Student studentsArr[3];
	for (int i=0; i<3; i++) {
		cout << "Enter details of student " << i+1 << endl;
		studentsArr[i].setStudentData();
	}
	cout << "\n\n";
	for (int i=0; i<3; i++) {
		cout << "Details of student " << i+1 << " are:\n";
		studentsArr[i].getStudentData();
	}
	
	return 0;
}
