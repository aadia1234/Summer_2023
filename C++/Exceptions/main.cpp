#include <iostream>

using namespace std;

double calculate_mpg(int miles, int gallons);

int main() {
    int miles {}, gallons {};
    double miles_per_gallon {};

    cout << "Enter the miles driven: ";
    cin >> miles;

    cout << "Enter the gallons used: ";
    cin >> gallons;

    try {
        // if (gallons == 0) {
        //     throw 0;
        // } else {
        //     miles_per_gallon = static_cast<double>(miles) / gallons;
        //     cout << "Result: " << miles_per_gallon << endl;
        // }
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    } catch (int& ex) {
        cerr << "Sorry, you can't divide by zero" << endl;
    } catch (string& ex) {
        cerr << ex << endl;
    } catch (...) {
        cerr << "Unknown exception" << endl;
    }

    cout << "Bye!" << endl;
    return 0;
}

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0) {
        throw 0;
    } else if (miles < 0 || gallons < 0) {
        throw string {"Negative value error"};
    }
    return static_cast<double>(miles) / gallons;
}