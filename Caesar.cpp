#include <iostream>
#include <string>
using namespace std;

// Function to encrypt text
void encrypt() {
    string text;
    int shift;

    cout << "Enter the text to encrypt: ";
    cin.ignore(); // clears input buffer
    getline(cin, text); // reads whole line
    cout << "Enter the shift value: ";
    cin >> shift;

    // Encryption now
    for (char &ch : text) {
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            ch = (ch - offset + shift) % 26 + offset; // Shift character within bounds
        }
    }

    cout << "Encrypted text: " << text << endl;
}

// Function to decrypt text
void decrypt() {
    string text;
    int shift;
    
    cout << "Enter the text to decrypt: ";
    cin.ignore(); // Clear input buffer
    getline(cin, text); // Read the entire line
    cout << "Enter the shift value: ";
    cin >> shift;

    // Perform decryption
    for (char &ch : text) {
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            ch = (ch - offset - shift + 26) % 26 + offset; // Reverse the shift within bounds
        }
    }

    cout << "Decrypted text: " << text << endl;
}

int main() {
    int choice;
    cout << "Simple Encryption/Decryption Tool\n";
    cout << "1. Encrypt a message\n";
    cout << "2. Decrypt a message\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        encrypt();
    } else if (choice == 2) {
        decrypt();
    } else {
        cout << "Invalid choice. Exiting.\n";
    }

    return 0;
}
