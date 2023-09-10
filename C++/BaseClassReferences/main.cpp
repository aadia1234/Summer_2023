#include <iostream>
#include <vector>

using namespace std;

class Account {
    
    public:
        virtual ~Account() { cout << "Account destructor" << endl; }

        virtual void withdraw(double x) { cout << "Account withdraw: " << x << endl; } // virtual enables polymorphism

        virtual void deposit(double x) final { cout << "Account deposit: " << x << endl; } // final prevents this function from being overriden by subclasses (must be a virtual function)

};

class Savings: public Account {
    
    public:
        virtual ~Savings() { cout << "Savings destructor" << endl; }

        virtual void withdraw(double x) override { cout << "Savings withdraw: " << x << endl; }

};

class Checking: public Account {
    
    public:
        virtual ~Checking() { cout << "Checking destructor" << endl; }

        virtual void withdraw(double x) override { cout << "Checking withdraw: " << x << endl; }

};

class Trust_Account: public Account {
    
    public:
        virtual ~Trust_Account() { cout << "Trust destructor" << endl; }

        virtual void withdraw(double x) override { cout << "Trust withdraw: " << x << endl; }

};

void do_withdraw(Account& account, double amount);

int main() {
    Account a;
    Account& ref = a;
    ref.withdraw(1000);

    Trust_Account t;
    Account& ref1 = t;
    ref1.withdraw(1000);

    Account a1;
    Savings a2;
    Checking a3;
    Trust_Account a4;

    do_withdraw(a1, 1000);
    do_withdraw(a2, 2000);
    do_withdraw(a3, 3000);
    do_withdraw(a4, 4000);

}

void do_withdraw(Account& account, double amount) {
    account.withdraw(amount);
}