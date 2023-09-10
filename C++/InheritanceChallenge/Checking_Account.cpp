#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance): Account {name, balance} {}

bool Checking_Account::withdraw(double amount) { return Account::withdraw(amount + flat_fee); }

std::ostream& operator<<(std::ostream& os, const Checking_Account& checking_account) {
    os << "Checking_Account: " << checking_account.name << ": " <<  checking_account.balance;
    return os;
}