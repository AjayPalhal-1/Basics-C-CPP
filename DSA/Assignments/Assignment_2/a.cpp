#include <iostream>
using namespace std;

int main() {
    // Upper part of the pattern (Hollow triangle)
    for (int i = 1; i <= 6; i++) { 
        // Print leading spaces
        for (int j = 1; j <= 6 - i; j++) {
            cout << "  ";
        }
        // Print stars with spaces for hollow effect
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i) {
                cout << "*   ";
            } else {
                cout << "    ";
            }
        }
        cout << endl;
    }
    
    // Lower part of the pattern (Mirrored hollow triangle)
    for (int i = 5; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= 6 - i; j++) {
            cout << "  ";
        }
        // Print stars with spaces for hollow effect
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i) {
                cout << "*   ";
            } else {
                cout << "    ";
            }
        }
        cout << endl;
    }
}
