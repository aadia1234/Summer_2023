#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    private:
        // attributes
        string name {"Player"};
        int health {100};
        int xp {3};

    public:
        // methods
        void talk(string message) { cout << name << " says " << message << endl; }
        bool is_dead();
};

int main() {
    Player frank;
    // frank.name = "Frank"; // error
    // cout << frank.health << endl // error
    frank.talk("Hello there!");
    return 0;
}