// Assignment 2
// Function Overloading

// 1. Write a functions to add 2 int value, 2 float value, 1 int and 1 float value and vice
// versa . similary write functions for all other arithmetic operations.


#include<stdio.h>
#include<iostream>
using namespace std;


struct FOverload 
{
    int num1;
    int num2 ;
    double num3 ;
    double num4 ;


    FOverload(){};

    int Add(int a , int b)
    {
        this->num1=a;
        this->num2=b;
         return num1+num2;
      
      
    }


    double Add(int a , float b)
    {
        this->num1=a;
        this->num3=b;
         return num1+num3;
      

      
    }

      double Add( float b, int a)
    {
        this->num1=a;
        this->num3=b;
         return num1+num3;
      
      
      
    }

      double Add(float a , float b)
    {
        this->num3=a;
        this->num4=b;
         return num3+num4;
      
      
    }



};

int main()
{
 
 FOverload F1;
 float a=10.7,b=20.5;
 int c=30,d=40;

//  printf("Addition Float + Float : %lf \n",F1.Add(a,b));
//  printf("Addition int + int : %d \n",F1.Add(c,b));
//  printf("Addition int + float : %lf \n",F1.Add(c,d));
//  printf("Addition float + int  : %lf \n",F1.Add(c,d));


cout << "\nAddtion Float + Float : " << F1.Add(a,b);
cout<< "\nAddition int + int : "<< F1.Add(c,b);
cout<< "\nAddition int + Float : " <<F1.Add(c,d);
cout<< "\nAddition Float + int  : " <<F1.Add(b,c)<< endl;







}