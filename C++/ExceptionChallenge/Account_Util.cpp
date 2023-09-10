#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account*>& accounts) {
    std::cout << "\n===============Accounts===============" << std::endl;
    
    for (const auto& acc : accounts) {
        std::cout << *acc << std::endl;
    }
}

void deposit(std::vector<Account*>& accounts, double amount) {
    std::cout << "\n===============Depositing to Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc->deposit(amount) ? "Deposited " : "Failed deposit of ";
        std::cout << msg << amount << " to " << *acc << std::endl;
    }
}

void withdraw(std::vector<Account*>& accounts, double amount) {
    std::cout << "\n===============Withdrawing from Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc->withdraw(amount) ? "Withdrew " : "Failed withdrawl of ";
        std::cout << msg << amount << " to " << *acc << std::endl;
    }
}