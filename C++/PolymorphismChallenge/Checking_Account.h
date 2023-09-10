#include "Account.h"
#pragma once

class Checking_Account: public Account {

    private:
        static constexpr const char* def_name = "Unnamed Checking Account";
        static constexpr double def_balance = 0.0;
        static constexpr double flat_fee = 1.50;

    public:
        Checking_Account(std::string name = def_name, double balance = def_balance);
        virtual ~Checking_Account() = default;

        virtual void print(std::ostream& os) const override;
        
        virtual bool withdraw(double amount) override;
        virtual bool deposit(double amount) override { return Account::deposit(amount); };
};