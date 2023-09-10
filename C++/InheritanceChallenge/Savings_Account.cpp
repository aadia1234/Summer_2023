#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate): Account {name, balance}, int_rate {int_rate} {}

bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate / 100.0);
    return Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& savings_account) {
    os << "Savings_Account: " << savings_account.name << ": " << savings_account.balance << ", " << savings_account.int_rate << "%";
    return os;
}