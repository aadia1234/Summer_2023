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

int main() {
    cout << "\n====Pointers====" << endl;
    Account* p1 = new Account();
    Account* p2 = new Savings();
    Account* p3 = new Checking();
    Account* p4 = new Trust_Account();

    p1->withdraw(100);
    p2->withdraw(200);
    p3->withdraw(300);
    p4->withdraw(400);

    cout << "\n====Array====" << endl;
    Account* array[] {p1, p2, p3, p4};
    for (auto p : array) {
        p->withdraw(1000);
    }

    cout << "\n====Array====" << endl;
    array[0] = p4;
    for (auto p : array) {
        p->withdraw(1000);
    }

    cout << "\n====Vector====" << endl;
    vector<Account*> accounts {p1, p2, p3, p4};
    for (auto acc_ptr : accounts) {
        acc_ptr->withdraw(500.0);
    }

    cout << "\n====Vector====" << endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr : accounts) {
        acc_ptr->withdraw(600);
    }

    cout <<"\n====Clean up====" << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

}