#include <iostream>
using namespace std;

int main() {
    /*
    int num1 {10}, num2 {20};
    num1 = num2 = 1000; //chaining of assignment operators

    cout << num1 << ", " << num2 << endl;

    // Euro to Dollars

    const double usd_per_eur = 1.09;
    double euros {0.0}, dollars {0.0};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    cin >> euros;
    cout << euros << " EUR is " << euros * usd_per_eur << " USD" << endl;

    //increment & decrement operator
    int i = 0;
    int a = i++; //postfix - increments i AFTER it's used
    int b = ++i; //prefix - increments i BEFORE it's used
    cout << i << ", " << a << ", " << b << endl;


    //Casting/Mixed type expressions
    int num1 {0}, num2 {0}, num3 {0}, total {0};
    double average {0.0};
    const int count {3};

    cout << "Enter three integers separated by spaces" << endl;
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
//    average = ((double) total) / count; - old c code

    average = static_cast<double>(total) / count;
    cout << "Total sum: " << total << ", average: " << average << endl;

    //printing bool
    cout << (1 == 1) << boolalpha << endl;
    cout << (1 == 1) << endl << noboolalpha << endl;

     */

    //Challenge
    int cents {0}, dollars {0}, quarters {0}, dimes {0}, nickels {0}, pennies {0}, remaining_cents {0};
    const int cents_in_dollar = 100, cents_in_quarter = 25, cents_in_dime = 10, cents_in_nickel = 5, cents_in_penny = 1;

    cout << "Enter the number of cents you have: ";
    cin >> cents;

    dollars = cents / cents_in_dollar;
    remaining_cents = cents % cents_in_dollar;

    quarters = remaining_cents / cents_in_quarter;
    remaining_cents %= cents_in_quarter;

    dimes = remaining_cents / cents_in_dime;
    remaining_cents %= cents_in_dime;

    nickels = remaining_cents / cents_in_nickel;
    remaining_cents %= cents_in_nickel;

    pennies = remaining_cents / cents_in_penny;

    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;



    /* pseudocode

     get cents
//     set remaining_cents to cents % 100
     dollars = cents / 100
     quarters = remaining_cents / 25
     dimes = (remaining_cents % 25) / 10
     nickels = (remaining_cents % 10) / 5
     pennies = (remaining_cents % 5) / 1;


     print dollars, quarters, dimes, nickels, pennies

    */


    return 0;
}