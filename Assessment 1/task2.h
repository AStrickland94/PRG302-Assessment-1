#include <iostream>
using namespace std;

void task2() {
	int num1 = 0;
	int num2 = 0;

	cout << endl << "Task 2: Take two numbers and display the bigger number" << endl << endl;

	cout << "Input your first number: ";

	cin >> num1;

	cout << "Input your second number: ";

	cin >> num2;

	//compares the two values and outputs the greater number first
	if (num1 == num2) {
		cout << "The numbers are equal" << endl << endl;
	}
	else if (num1 > num2) {
		cout << num1 << " is greater than " << num2 << endl << endl;
	}
	else {
		cout << num2 << " is greater than " << num1 << endl << endl;
	}
}
