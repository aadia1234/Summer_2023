#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance): Account {name, balance} {}

bool Checking_Account::withdraw(double amount) { return Account::withdraw(amount + flat_fee); }

void Checking_Account::print(std::ostream& os) const {
    os << "Checking_Account: " << this->name << ": " <<  this->balance;
}