#include <iostream>

using namespace std;

int main () {
	int arr[10];
	for(int i=0; i<10; i++) {
		cout << "Enter number " << i+1 << endl;
		cin >> arr[i];
	}
	int key, keyFound = 0, index;
	cout << "Enter key: ";
	cin >> key;
	for(int i=0; i<10; i++) {
		if(key == arr[i]) {
			keyFound = 1;
			index = i;
			break;
		}
	}
	if(keyFound)
		cout << "Key was found at index " << index;
	else
		cout << "Key was not found";
}
