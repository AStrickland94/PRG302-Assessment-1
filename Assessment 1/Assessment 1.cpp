#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string userInput;
    vector<string> unconvertedArray;
    vector<int> convertedArray;
    float averageNum = 0;
    
    cout << "Input numbers seperated by a comma: ";

    cin >> userInput;

    stringstream numbersStr{ userInput };

    for (string part{}; getline(numbersStr, part, ','); unconvertedArray.push_back(part));

    for (int i = 0; i < unconvertedArray.size(); i++) {
        convertedArray.push_back(stoi(unconvertedArray[i]));
    }

    for (int i = 0; i < convertedArray.size(); i++) {
        averageNum = averageNum + convertedArray[i];
    }
    
    averageNum = averageNum / convertedArray.size();

    cout << "The average is: " << averageNum;

    return 0;
}
