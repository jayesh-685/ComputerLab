#include <iostream>

using namespace std;

int main () {
	int arr[10];
	for(int i=0; i<10; i++) {
		cout << "Enter number " << i+1 << endl;
		cin >> arr[i];
	}
	int key;
	cout << "Enter key: ";
	cin >> key;
	
	int start=0, end=9, middle = (start+end)/2, keyFound=0;
	while (start < end) {
		if (key > arr[middle])
			start = middle;
		else if (key < arr[middle])
			end = middle;
		else if(key == arr[middle]){
			keyFound = 1;
			break;
		}
		middle = (start + end)/2;
	}
	if(keyFound)
		cout << "Key was found at index = " << middle;
	else
		cout << "Key was not found";
	return 0;
}
