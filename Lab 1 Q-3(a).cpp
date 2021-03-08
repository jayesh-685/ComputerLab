#include <iostream>

using namespace std;

namespace first_student
{
	void name ()
	{
		cout << "First student is Ramesh\n";
	}
}

namespace second_student 
{
	void name ()
	{
		cout << "Second student is Kamlesh\n";
	}
}

int main () {
	first_student::name();
	second_student::name();
	
	return 0;
}
