#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string*, int);
void displayArray(string*, int);

int main()
{
	const int SIZE = 5;
	string* arr = new string[SIZE];
	*(arr) = "Abel";
	*(arr + 1) = "Ben";
	*(arr + 2) = "Cadence";
	*(arr + 3) = "Darren";
	*(arr + 4) = "Elfonso";

	cout << "Orignial array: ";
	displayArray(arr, SIZE);
	



}

string* reverseArray(string* arr, int size) { // [0, 1, 2, 3, 4] if there are only 5 names, only two swaps need to be made
	for (int i = 0; i < size / 2; i++) {
		string temp = *(arr + i); //*(arr + i) acts as "a"
		*(arr + i) = 
	}
}

void displayArray(string* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
}

