#include "Account.h"
#pragma once

class Savings_Account: public Account {
    public:
        double int_rate;
        Savings_Account();
        ~Savings_Account();
        void deposit(double amount);
        void withdraw(double amount);
};