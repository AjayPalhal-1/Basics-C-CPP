#include<iostream>
using namespace std;

class shape
{
    int height ;
    int length ;



public:

   

  void setHeight(int h )
  {
    this->height=h;
    
  }

    void setLength(int l)
  {
    this->length=l;
    
  }


float getHeight()
  {
    return  this->height;
    
  }
  float getLength()
  {
    return  this->length;
    
  }


  float CalArea(int h , int l)
  {
    cout<< "Area Of Reactangle : ";
    // return (0.5 * getHeight() * getLength());

    int height = h;
    int length = l;
     return height*length;

  }

  float CalArea(int side)
  {
    cout<< "Area Of Square  : ";
    // return (0.5 * getHeight() * getLength());

    
    int s = side ;
     return s*s;

  }

  float CalArea(int R, float pi )
  {
    cout<< "Area Of Circle  : ";
    // return (0.5 * getHeight() * getLength());
 int pay = pi;

    
    int Radius = R ;
     return  pay * Radius * Radius ;

  }


};


int main ()
{
    shape S1 ;  
   cout << S1.CalArea(10,10);
 cout << S1.CalArea(10);
 float PI=3.14;
 cout << S1.CalArea(10 , PI);


}


