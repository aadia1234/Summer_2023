#include <iostream>

using namespace std;

int main() {
    string s;
    int n;

    cout << "Enter a string/sentence: ";
    cin >> s;

    n = s.length();

    for (int i {0}; i < n; i++) {
        
        for (int j {0}; j < (n * 2); j++) {
            int dist = abs(n - j);
            
            cout << (dist <= i ? s.at(abs(i - dist)) : ' ');
        }

        cout << endl;
    }

    /* pseudocode
    
    init s, n

    print "Enter a string/sentence: "
    
    get s
    set n to s.length()
    for i from 0 to < n: // loop through line

        for j from 0 to < n*2: // loop through each space
        set dist = abs(n-j)
        if dist <= i:
            print s.at(abs(i - dist))
        else:
            print ""

        print new line
    */

    return 0;
}