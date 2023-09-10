#include <iostream>
#include <vector>
#include <exception>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    try {
        Account* p1 = new Checking_Account {"Larry", 10000};
        Account* p2 = new Savings_Account {"Moe", 1000};
        Account* p3 = new Trust_Account {"Curly"};

        p1->withdraw(100'000);
    } catch (const exception& ex) {
        cerr << ex.what() << endl;
    }

    return 0;
}