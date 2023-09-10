#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

Account::Account(std::string name, double balance): name {name}, balance {balance} {
    if (balance < 0) {
        throw IllegalBalanceException();
    }
}

bool Account::deposit(double amount) {
    if (amount > 0) { balance += amount; }
    return amount > 0;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) { 
        balance -= amount; 
        return true;
    } else {
        throw InsufficientFundsException();
    }
}

double Account::get_balance() const { return this->balance; }

void Account::print(std::ostream& os) const {
    os << "Account: " << this->name << ": " << this->balance;
}