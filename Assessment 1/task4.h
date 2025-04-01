#include <iostream>
using namespace std;

void task4() {
	cout << endl << "Task 4: Print all even numbers between 1 and 20" << endl << endl;

	//sets integer i to 1 and increments up to 20 running a check for even numbers each increment
	for (int i = 1; i <= 20; i++) {
	
		//checks if i mod 2 equals 0, effectively checking if i is divisible by 2 and thus is even
		if (i % 2 == 0) {
			//prints i if the check is successful
			cout << i << " ";
		}
	}

	cout << endl << endl;
}
