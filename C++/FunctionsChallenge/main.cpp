#include <iostream>
#include <vector>

using namespace std;

void display_menu(vector<int> &list);
void get_choice(char &choice);
void print_nums(const vector<int> &list);
void add_nums(vector<int> &list);
void display_mean(const vector<int> &list);
void display_max(const vector<int> &list);
void display_min(const vector<int> &list);
void find_num(const vector<int> &list);
inline void quit(bool &exit);

int main() {
    vector<int> list {};

    display_menu(list);

    return 0;
}

void display_menu(vector<int> &list) {
    char choice {0};
    bool exit {false};

    do {

        cout << "\nP - Print numbers\nA - Add numbers\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nF - Find a number\nQ - Quit\n" << endl;
        get_choice(choice);

        switch (choice) {
            case 'P':
                print_nums(list);
                break;

            case 'A':
                add_nums(list);
                break;

            case 'M':
                display_mean(list);
                break;

            case 'S':
                display_min(list);
                break;

            case 'L':
                display_max(list);
                break;

            case 'F':
                find_num(list);
                break;

            case 'Q':
                quit(exit);
                break;

            default:
                cout << "Unknown selection, please try again!" << endl;
                break;
        }

    } while (!exit);
}

void get_choice(char &choice) {
    cout << "Enter your choice: ";
    cin >> choice;
    choice = toupper(choice);
}

void print_nums(const vector<int> &list) {
    string printedList = "[ ";

    for (int num : list) {
        printedList += to_string(num) + " ";
    }

    printedList += list.empty() ? "] - the list is empty" : "]";
    
    cout << printedList << endl;
}

void add_nums(vector<int> &list) {
    int number {0};

    cout << "Enter a number to add to the list: ";
    cin >> number;
    list.push_back(number);

    cout << endl << number << " was added to the list" << endl;
}

void display_mean(const vector<int> &list) {
    int sum {0};

    for (int num : list) {
        sum += num;
    }

    cout << "The mean of the list is: " << (static_cast<double>(sum) / list.size()) << endl;
}

void display_min(const vector<int> &list) {
    int min = INT_MAX;
    
    for (int num : list) {
        min = num < min ? num : min;
    }

    cout << "Minimum number in list: " << min << endl;
}

void display_max(const vector<int> &list) {
    int max = INT_MIN;

    for (int num : list) {
        max = num > max ? num : max;
    }

    cout << "Maximum number in list: " << max << endl;
}

void find_num(const vector<int> &list) {
    int num {0};
    bool found = false;

    cout << "Enter a number you would like to find: ";
    cin >> num;

    for (int n : list) {
        if (n == num) {
            found = true;
            break;
        }
    }

    cout << endl << num << " was " << (!found ?  "not " : "") << "found" << endl;
}

inline void quit(bool &exit) {
    exit = true;
    cout << "Goodbye!" << endl;
}