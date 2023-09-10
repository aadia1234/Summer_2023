#include "Account.h"
#pragma once

class Checking_Account: public Account {
    friend std::ostream& operator<<(std::ostream& os, const Checking_Account& checking_account);

    private:
        static constexpr const char* def_name = "Unnamed Checking Account";
        static constexpr double def_balance = 0.0;
        static constexpr double flat_fee = 1.50;

    public:
        Checking_Account(std::string name = def_name, double balance = def_balance);
        
        bool withdraw(double amount);
};