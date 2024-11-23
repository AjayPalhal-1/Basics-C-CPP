#include<iostream>
using namespace std;

int main() {
    // What is a 2D Array?
    /*
    A 2D array is an array of arrays. It is used to store data in a matrix-like structure
    with rows and columns. It can be visualized as a table with rows and columns.
    Example of a 2D array:
    
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    */

    // Why Do We Use 2D Arrays?
    /*
    1. To organize data in a grid-like structure.
    2. To represent matrices in mathematics.
    3. To store multiple related data points together (like seats in a cinema hall).
    4. To access data efficiently using two indices (row and column).
    */

    // Example of a simple 2D array with input and sum calculation:
    
    int arr[2][2]; // Declare a 2D array of size 2x2
    cout << "Enter 2D Array (2x2): \n";

    // Input elements into the 2D array using nested loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate the sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += arr[i][j];
        }
    }

    // Output the sum of all elements
    cout << "Sum of all elements: " << sum << endl;

    // How to Use 2D Arrays:
    // - Declare the array with specific rows and columns.
    // - Use nested loops to input and output data.
    // - Perform operations (like sum, transpose) with nested loops.

    return 0;
}
