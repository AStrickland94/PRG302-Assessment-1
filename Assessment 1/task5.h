#include <iostream>
using namespace std;

void task5() {
	int userInput = 0;
	int sum = 0;
	
	cout << endl << "Task 5: Find the sum of all integers from 1 to a given number" << endl << endl;

	cout << "Input a number: ";

	cin >> userInput;

	//sets integer i to 1 then increments i by 1 summing each increment with the total so far until i equals the user inputted number
	for (int i = 1; i <= userInput; i++) {
		sum = sum + i;
	}

	cout << "The sum of all integers between 1 and " << userInput << " is: " << sum << endl << endl;
}
