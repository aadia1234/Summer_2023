#include <iostream>
#include <string>
#include "Account.h"

using namespace std;


int main() {
    Account frank_account;
    
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) {
        cout << "Deposit OK" << endl;
    } else {
        cout << "Deposit not allowed" << endl;
    }

    if (frank_account.withdraw(500.0)) {
        cout << "Withdrawl OK" << endl;
    } else {
        cout << "Insufficient funds" << endl;
    }

    if (frank_account.withdraw(1500.0)) {
        cout << "Withdraw OK" << endl;
    } else {
        cout << "Insufficient funds" << endl;
    }

    return 0;
}