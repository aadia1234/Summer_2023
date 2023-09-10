#include <iostream>
#include <vector>
using namespace std;



int main() {
    string printedList {};
    int number {0}, sum {0}, min {INT_MAX}, max {INT_MIN};
    char choice {0};
    bool exit {false};
    vector<int> list {};

    do {

        cout << "\nP - Print numbers\nA - Add numbers\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\n" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'p': case 'P':
                printedList = "[ ";

                for (int num : list) {
                    printedList += to_string(num) + " ";
                }

                printedList += "]";
                printedList += list.empty() ? " - the list is empty" : "";

                cout << printedList << endl;
                break;

            case 'a': case 'A':
                cout << "Enter a number to add to the list: ";
                cin >> number;

                list.push_back(number);

                cout << endl << number << " was added to the list" << endl;
                break;

            case 'm': case 'M':

                for (int num : list) {
                    sum += num;
                }

                cout << "The mean of the list is: " << (static_cast<double>(sum) / list.size()) << endl;

                break;

            case 's': case 'S':

                for (int num : list) {
                    min = num < min ? num : min;
                }

                cout << "Minimum number in list: " << min << endl;
                break;

            case 'l': case 'L':

                for (int num : list) {
                    max = num > max ? num : max;
                }

                cout << "Maximum number in list: " << max << endl;
                break;

            case 'q': case 'Q':
                exit = true;
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Unknown selection, please try again!" << endl;
                break;
        }

    } while (!exit);

    /* pseudocode

     char choice, int number, vector<int> list


     do:
        print menu options
        get choice

        switch choice:
            P: print numbers
            A: get number, list.push_back(number);
            M: for loop -> sum --> (double) sum / list.size()
            S: for loop -> min
            L: for loop -> max
            Q: exit while loop

    while true

     */

    return 0;
}