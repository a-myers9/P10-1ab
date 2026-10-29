// ArrayIntegerDigits.cpp - Anna Myers - 29 October 2026
// Description: A program that initializes an array with ten four-digit random integers and 
// prints five lines of output, containing: every element in order of appearance,
// every element at an even index, every even element, all elements in reverse order,
// and only the first and last element.

#include <iostream>

using namespace std;

int main(void) {
	srand(time(0));
	int myArray[10];

	cout << "The random integers: ";
	for (int i = 0; i < 10; i++) {
		do {
			myArray[i] = (rand());
		} while (!((1000 <= myArray[i]) && (9999 >= myArray[i])));
	cout << myArray[i] << " ";
	}
	

	cout << endl;
	
}