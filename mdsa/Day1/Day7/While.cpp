// Problem 1: Reverse a Number
// Problem Statement:
// Write a C++ program that takes an integer as input and reverses the digits of the number using a while loop.

// Input:

// A positive integer n.
// Output:

// The reversed integer.


#include<iostream>
using namespace std;


int main()
{

    int num;

    cout<<"Enter the No :";
    cin>>num;
    int rev =0;



    while(num)
    {
        int r = num% 10;
        num=num/10;
        rev =(rev * 10)+r;


    }
    cout<<"Reversed No : " << rev<<endl;
}


//Today was great day i solved 2 problem in 1st take. 12/10/24
// Dasara pay pasara !!!!!!!!!!!!!!!!!!!!