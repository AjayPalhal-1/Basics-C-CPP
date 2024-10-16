// 2. Write a function to calculate area of shape, for calculating area of triangle,
// rectangle, circle differently.



#include<iostream>
using namespace std;

struct shape 
{
    


   // void calarea();

    void calarea(int h , int base,float c)
    {
        
        cout << "Area Of Trangle Is : " << (c * h * base)<< endl;

    }

     void calarea(int l , int w)
    {
       
       cout << "Area Of Ractrangle Is : " << ( l * w)<< endl;

    }

     void calarea(int side)
    {
      
        cout << "Area Of Square  Is : " << (side * side)<< endl;

    }

     void calarea(int radius, float pi)
    {
       

        cout << "Area Of Circle  Is : " << (pi * radius * radius)<< endl<< endl;

    }


};


int main ()
{
 
 shape s1 ;

    int height = 100 ;
    int base = 5;
    float const1=0.5;
    int length= 15;
    int width =5;
    int side =5;
    int radius =4;
    float pi=3.14;
    
    s1.calarea(height,base, const1);
    s1.calarea(length,width);
    s1.calarea(side);
    s1.calarea(radius,pi);



    return 0;
}