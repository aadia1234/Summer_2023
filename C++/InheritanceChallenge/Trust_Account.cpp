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

std::ostream& operator<<(std::ostream& os, const Trust_Account& trust_account) {
    os << "Trust_Account: " << trust_account.name << ": " << trust_account.balance << ", " << trust_account.int_rate << "%, withdrawls: " << trust_account.num_withdrawls;
    return os;
}