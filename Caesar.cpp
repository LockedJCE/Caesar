#include <iostream>
#include <string>
using namespace std;

void encrypt(); // Function to encrypt text
void decrypt(); // Function to decrypt text

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
