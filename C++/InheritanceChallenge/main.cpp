#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    vector<Account> accounts {Account {}, Account {"Larry"}, Account {"Moe", 2000}, Account {"Curly", 5000}};
    vector<Savings_Account> savings_accounts {Savings_Account {}, Savings_Account {"Superman"}, Savings_Account {"Batman", 2000}, Savings_Account {"Wonder Woman", 5000, 5.0}};
    vector<Checking_Account> checking_accounts {Checking_Account {}, Checking_Account {"Kirk"}, Checking_Account {"Spock", 2000}, Checking_Account {"Spock", 5000}};
    vector<Trust_Account> trust_accounts {Trust_Account {}, Trust_Account {"Athos", 10000, 5.0}, Trust_Account {"Porthos", 20000, 4.0}, Trust_Account {"Aramis", 30000}};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(savings_accounts);
    deposit(savings_accounts, 1000);
    withdraw(savings_accounts, 2000);

    display(checking_accounts);
    deposit(checking_accounts, 1000);
    withdraw(checking_accounts, 2000);

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 2000);


    return 0;
}