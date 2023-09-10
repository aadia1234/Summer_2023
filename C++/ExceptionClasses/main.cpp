#include <iostream>

using namespace std;

class DivideByZeroException {

};

class NegativeValueException {

};

double calculate_mpg(int miles, int gallons);

int main() {
    int miles {}, gallons {};
    double miles_per_gallons {};

    cout << "Enter the miles driven: ";
    cin >> miles;

    cout << "Enter the gallons used: ";
    cin >> gallons;

    try {
        miles_per_gallons = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallons << endl;
    } catch (const DivideByZeroException& ex) {
        cerr << "Sorry, you can't divide by zero" << endl;
    } catch (const NegativeValueException& ex) {
        cerr << "Sorry, one or more parameters are negative" << endl;
    }

    cout << "Bye" << endl;
    return 0;
}

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0) {
        throw DivideByZeroException();
    } else if (miles < 0 || gallons < 0) {
        throw NegativeValueException();
    }
    return static_cast<double>(miles) / gallons;
}