// Problem 2: Sum of Digits
// Problem Statement:
// Write a C++ program that takes an integer as input and calculates the sum of its digits using a while loop.

// Input:

// A positive integer n.
// Output:

// The sum of the digits.



#include<iostream>
using namespace std;

int main()
{

    cout<<"Enter the NO. ";
    int num ;
    cin>>num;
    int sum=0;


    while(num)
    {
        int r= num%10;
        num =num/10;
        sum+=r;



    }
    cout<<"Addition Of Each Digit is : "<<sum<<endl;
}


//Today was great day i solved 2 problem in 1st take. 12/10/24