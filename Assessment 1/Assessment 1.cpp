#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
using namespace std;

int main()
{
    int task = 1;

    while (task > 0) {
        cout << "Which task (1-5) would you like to view? (0 to exit): ";

        cin >> task;

        switch (task) {
        case 0:
            return 0;
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        default:
            cout << "Unknown task" << endl;
            break;
        }
    }
    return 0;
}
