#include <iostream>
using namespace std;

int main() {
    // Possible values for each position
    int values[] = {1, 2, 3};

    // Iterate through all combinations
    for (int i = 0; i < 3; i++) { // Outer loop for the 1st position
        for (int j = 0; j < 3; j++) { // Middle loop for the 2nd position
            for (int k = 0; k < 3; k++) { // Inner loop for the 3rd position
                // Print the combination
                cout << values[i] << values[j] << values[k] << endl;
            }
        }
    }

    return 0;
}
