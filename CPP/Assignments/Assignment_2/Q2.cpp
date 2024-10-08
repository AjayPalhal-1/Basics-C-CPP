#include<iostream>
using namespace std;

class Shape
{
  public:
  Shape(){ }

  virtual float calArea()=0; // Abstracted Class

};

class Trangle:public Shape
{ 
    int height ;
    int Base ;


    public:

    Trangle(){};

    
    float calArea()
    {
        return (0.5 * (getBase()* getHeight())) ; 
    }

     void setHeight(int h )
     {
        this->height =h;
     }

     void setWidth(int w )
     {
        this->Base =w;
     }

     int getHeight ()
     {
        return this->height;
     }

      int getBase ()
     {
        return this->Base;
     }



};


int main ()
{
   
    Trangle T1;
     T1.setHeight(200);
     T1.setWidth(200);
    
    cout << "Area Of Trangle Is : " << T1.calArea()<<"\n\n";



    return 0;
}

