#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Original array with 10 elements

    // Reversing only the first half of the array
    for (int i = 0; i < 5 / 2; i++)  // Loop through the first half of the array (first 5 elements)
    {
        int temp = arr[i];
        arr[i] = arr[4 - i];  // Swap the current element with the corresponding element from the end of the first half
        arr[4 - i] = temp;
    }

    // Display the modified array
    for (int i = 0; i < 10; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
