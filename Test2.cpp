#include <iostream>

using namespace std;

int main () {
	int a, b;
	float c;
	char operation;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter operation: ";
	cin >> operation;
	cout << "Enter number 2: ";
	cin >> b;
	
	switch (operation) {
			case '+' : 
				c = a+b;
				break;
			case '-' :
				c = a-b;
				break;
			case '*' :
				c = a*b;
				break;
			case '/' :
				c = (float)a/b;
				break;
			default :
				cout << "Invalid operation";
	}
	
	cout << "Result is " << c;
	
	
	return 0;
}
