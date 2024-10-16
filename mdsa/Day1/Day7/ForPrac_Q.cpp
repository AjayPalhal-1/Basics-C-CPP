// Problem 2: Find Minimum and Maximum in Array
// Problem Statement:
// Write a C++ program that reads n numbers into an array, then finds the minimum and maximum value in the array using a for loop.

// Input:

// The first input is an integer n (the size of the array).
// The second input is an array of n integers.
// Output:

// Output the minimum and maximum values from the array.


#include<iostream>
using namespace std;

int main ()
{   int size;
    
    cout<<"Enter Array Size  : ";
    cin>>size;
    int arr[size];
    cout<<"Enter Array Element : "<<endl;

    for(int i =0;i<size;i++)
    {
        cin>> arr[i];

    }
        cout<<"Array Element Are : "<<endl;


       for(int i =0;i<size;i++)
    {
        cout<< arr[i] <<endl<<endl;
        
    }

    int max= arr[0];
        int min= arr[0];


    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }

        if(min>arr[i])
        {
            min=arr[i];

        }
    }

    cout<<"Max No Is : "<< max<<endl;
    cout<<"Min No Is : "<< min<<endl;


}