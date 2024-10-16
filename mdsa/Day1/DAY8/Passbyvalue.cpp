#include<iostream>
using namespace std;
int add(int  , int &);


int main()
{
    int num1 , num2;    
    cout<< "Enter No 1: ";
    cin >> num1 ;
    cout<<"ENter No 2 : ";
    cin>>num2;

    add(num1, num2);

}

int add(int num1 , int &num2)
{
    cout<<"Num1  "<<(num1+1)<<endl ;
    cout<<"Num2  "<<(num2+2)<<endl;

}

