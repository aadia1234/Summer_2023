#include "Account.h"

Account::Account(std::string name, double balance): name {name}, balance {balance} {}

bool Account::deposit(double amount) {
    if (amount > 0) { balance += amount; }
    return amount > 0;
}

bool Account::withdraw(double amount) {
    bool can_withdraw = balance - amount > 0;
    if (can_withdraw) { balance -= amount; }
    return can_withdraw;
}

double Account::get_balance() const { return this->balance; }

std::ostream& operator<<(std::ostream& os, const Account& account) {
    os << "Account: " << account.name << ": " << account.balance;
    return os;
}