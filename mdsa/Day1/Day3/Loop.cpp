#include<iostream>
using namespace std;









int main() {
    int a, b, c, d;
    cout << "Taking Input From User" << endl;
    cin >> a >> b >> c >> d;

    int largest = a;  // Assume 'a' is the largest initially

    if (b > largest) {
        largest = b;  // Update largest if 'b' is greater
    }

    if (c > largest) {
        largest = c;  // Update largest if 'c' is greater
    }

    if (d > largest) {
        largest = d;  // Update largest if 'd' is greater
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}

