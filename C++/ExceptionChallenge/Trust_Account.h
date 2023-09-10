#include "Savings_Account.h"
#pragma once

class Trust_Account: public Savings_Account {

    private:
        static constexpr const char* def_name = "Unnamed Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_int_rate = 0.0;
        static constexpr double max_withdraw_percent = 0.2;
        static constexpr size_t max_withdrawls = 3;
        static size_t num_withdrawls;

    public:
        Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
        virtual ~Trust_Account() = default;

        virtual void print(std::ostream& os) const override;
        
        virtual bool deposit(double amount) override;
        virtual bool withdraw(double amount) override;
};