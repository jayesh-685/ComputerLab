#include <iostream>

using namespace std;

namespace first_val
{
	int val = 200;
}

int val = 100;

int main () {
	int val = 50;
	cout << first_val::val;
	
	return 0;
}
