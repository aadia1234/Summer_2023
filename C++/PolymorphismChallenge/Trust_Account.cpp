#include "Trust_Account.h"

size_t Trust_Account::num_withdrawls = 0;

Trust_Account::Trust_Account(std::string name, double balance, double int_rate): Savings_Account {name, balance, int_rate} {}

bool Trust_Account::deposit(double amount) {
    bool did_deposit = Savings_Account::deposit(amount);
    if (did_deposit && amount > 5000.00) { Account::deposit(50.00); }
    return did_deposit; 
}

bool Trust_Account::withdraw(double amount) {
    bool can_withdraw = (num_withdrawls < max_withdrawls) && (amount < balance * max_withdraw_percent);
    if (can_withdraw) {
        Savings_Account::withdraw(amount);
        num_withdrawls++;
    }

    return can_withdraw;
}

void Trust_Account::print(std::ostream& os) const {
    os << "Trust_Account: " << this->name << ": " << this->balance << ", " << this->int_rate << "%, withdrawls: " << this->num_withdrawls;
}