#include "Savings_Account.h"
#pragma once

class Trust_Account: public Savings_Account {
    friend std::ostream& operator<<(std::ostream& os, const Trust_Account& trust_account);

    private:
        static constexpr const char* def_name = "Unnamed Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_int_rate = 0.0;
        static constexpr double max_withdraw_percent = 0.2;
        static constexpr size_t max_withdrawls = 3;
        static size_t num_withdrawls;

    public:
        Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
        
        bool deposit(double amount);
        bool withdraw(double amount);
};