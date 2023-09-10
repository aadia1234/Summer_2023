#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account>& accounts) {
    std::cout << "\n===============Accounts===============" << std::endl;
    
    for (const auto& acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Account>& accounts, double amount) {
    std::cout << "\n===============Depositing to Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.deposit(amount) ? "Deposited " : "Failed deposit of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account>& accounts, double amount) {
    std::cout << "\n===============Withdrawing from Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.withdraw(amount) ? "Withdrew " : "Failed withdrawl of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}


void display(const std::vector<Savings_Account>& accounts) {
    std::cout << "\n===============Savings Accounts===============" << std::endl;
    
    for (const auto& acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Savings_Account>& accounts, double amount) {
    std::cout << "\n===============Depositing to Savings Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.deposit(amount) ? "Deposited " : "Failed deposit of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Savings_Account>& accounts, double amount) {
    std::cout << "\n===============Withdrawing from Savings Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.withdraw(amount) ? "Withdrew " : "Failed withdrawl of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}


void display(const std::vector<Checking_Account>& accounts) {
    std::cout << "\n===============Checking Accounts===============" << std::endl;
    
    for (const auto& acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Checking_Account>& accounts, double amount) {
    std::cout << "\n===============Depositing to Checking Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.deposit(amount) ? "Deposited " : "Failed deposit of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Checking_Account>& accounts, double amount) {
    std::cout << "\n===============Withdrawing from Checking Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.withdraw(amount) ? "Withdrew " : "Failed withdrawl of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}


void display(const std::vector<Trust_Account>& accounts) {
    std::cout << "\n===============Trust Accounts===============" << std::endl;
    
    for (const auto& acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Trust_Account>& accounts, double amount) {
    std::cout << "\n===============Depositing to Trust Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.deposit(amount) ? "Deposited " : "Failed deposit of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Trust_Account>& accounts, double amount) {
    std::cout << "\n===============Withdrawing from Trust Accounts===============" << std::endl;

    for (auto& acc : accounts) {
        std::string msg = acc.withdraw(amount) ? "Withdrew " : "Failed withdrawl of ";
        std::cout << msg << amount << " to " << acc << std::endl;
    }
}