#include <iostream>
#include <string>

using namespace std;

// test string: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz `1234567890-='[]\;,./~!@#$%^&*()_+{}|:"<>?

int main() {

    const char start = ' ', end = '~';
    string secret_message, encrypted_message {""}, decrypted_message{""};
    string key = "0123456789I]C(DAop$T&r|X,g\\yiO*P-#hu/ sE`UbaH'=Wj:}<\"LQ^.%JRFV~?G_m)B!;StKxYdqwlZv>ne@Mfc+zN{k[";
    cout << "Enter a secret message: " << endl;


    getline(cin, secret_message);

    for (char c : secret_message) {
        
        encrypted_message += (c >= start && c <= end) ? key.at(c - start) : c;

    }

    for (char c : encrypted_message) {
        decrypted_message += (c >= start && c <= end) ? start + key.find(c) : c;
    }

    cout << "Encrypted message: " << encrypted_message << endl;
    cout << "Decrypted message: " << decrypted_message << endl;
    
    

    /* pseudocode:

    init secret_message, encrypted_message, decrypted_message, key
    print ("Enter a secret message")

    get secret_message

    encrypt:
    for each c in secret_message:
        encrypted_message += key.at(c - 'A')
    
    decrypt:
    for each c in encrypted_message:
        decrypted_message += 'A' + key.find(c);


    print encrypted_message, decrypted_message

    
    
    */


    return 0;
}