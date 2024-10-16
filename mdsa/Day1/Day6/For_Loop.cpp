
// Problem Statement:
// Write a C++ program to find the sum of all multiples of a given 
// number x between 1 and n. Use a for loop to solve this problem.

#include<iostream>

using namespace std;

int main ()
{

  cout << "Enter The No. ";
  int x;
  cin>> x;
  cout << "Enter The Ending Range . ";
  int n;
  cin>> n;
  int sum=0;





    for (int i=x; i<=n;i+=x)
    {    sum+=i;
    // cout<< sum <<endl;
    }
        cout<< sum <<endl;

}