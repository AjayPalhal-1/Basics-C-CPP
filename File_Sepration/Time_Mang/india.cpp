#include<iostream>
using namespace std;
#include"india.h"

 namespace india 
{
    
       Time::Time()
        { 
            hr=0;
            min=0;
            sec=0;

        }

        Time :: Time(int hr , int min , int sec )
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }

      void   Time::  display()
        {
            cout<<"Hour : "<<this->hr<<endl;
            cout<<"Min : "<<this->min<<endl;
            cout<<"Sec : "<<this->sec<<endl;


        }


}