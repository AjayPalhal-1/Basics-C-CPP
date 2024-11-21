//       2. Display All Combination’s of (1, 2, 3). Like 111,
//       112, 113, 121, …, 333.






#include <iostream>
using namespace std;

int main() {
    int elements[] = {1, 2, 3}; // Example set of elements
    int n = sizeof(elements) / sizeof(elements[0]); // Number of elements in the array

    // Loop from 0 to 2^n - 1
    for (int i = 0; i < (1 << n); i++) {
        cout << "{ ";
        // Check each bit of 'i' to determine which elements to include
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // Check if the j-th bit in i is set
                cout << elements[j] << " ";
            }
        }
        cout << "}" << endl; // Print the current subset
    }

    return 0;
}
