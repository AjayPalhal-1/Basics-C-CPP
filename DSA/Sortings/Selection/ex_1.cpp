#include<iostream>
using namespace std;

// For You !!!!!

int main ()
{ 
    int size = 5;
    int arr[size] = {3, 1, 7, 2, 9}; 
     
    for(int i = 0; i < size - 1; i++)
    {  
        int minIdx = i;  // Start by assuming the minimum element is at position i

        for(int j = i + 1; j < size; j++)
        { 
            if(arr[j] < arr[minIdx])
            {
                minIdx = j;  // Update minIdx if a smaller element is found
            }
        }       

        // Swap the found minimum element with the element at position i
        if (minIdx != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }

    // Output the sorted array
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}
