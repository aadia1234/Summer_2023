#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    public:
        // attributes
        string name {"Player"};
        int health {100};
        int xp {3};

        // methods
        void talk(string message) { cout << name << " says " << message << endl; }
        bool is_dead();
};

class Account {
    public:
        // attributes
        string name;
        double balance {0.0};

        // methods
        bool deposit(double amount) { balance += amount; cout << "In deposit" << endl; }
        bool withdraw(double amount) { balance -= amount; cout << "In withdraw" << endl; }
};

int main() {

    Player frank, hero;
    Account frank_account, jim_account;
    Player* enemy {nullptr};
    Player players[] {frank, hero};
    vector<Player> player_vec {frank};
    
    player_vec.push_back(hero);
    enemy = new Player;

    jim_account.name = "Jim";
    jim_account.balance = 5000.0;
    jim_account.deposit(1000.0);
    jim_account.withdraw(500.0);

    frank.name = "Frank";
    frank.health = 200;
    frank.xp = 28;
    frank.talk("this is a message");

    (*enemy).health = 23;
    enemy->name = "Enemy";
    enemy->talk("I will destroy everything!");

    delete enemy;

    return 0;
}