#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void task1() {
    string userInput;
    vector<string> unconvertedArray;
    vector<int> convertedArray;
    float averageNum = 0;

    cout << endl << "Task 1: Calculate the average of a list of numbers." << endl << endl;
    
    cout << "Input numbers seperated by a comma: ";

    cin >> userInput;

    //turns the user input into a stringstream to allow manipulation
    stringstream numbersStr{ userInput };

    //seperates each part of the user input by comma delimiter and adds each number to the vector (array) 
    for (string part{}; getline(numbersStr, part, ','); unconvertedArray.push_back(part));

    //runs through the vector and converts each entry from a string to an int and inserts it into a new vector
    for (int i = 0; i < unconvertedArray.size(); i++) {
        convertedArray.push_back(stoi(unconvertedArray[i]));
    }

    //runs through the int vector adding all the ints together
    for (int i = 0; i < convertedArray.size(); i++) {
        averageNum = averageNum + convertedArray[i];
    }

    //divides the sum by the length of the vector to get the average
    averageNum = averageNum / convertedArray.size();

    cout << "The average is: " << averageNum << endl << endl;
}
