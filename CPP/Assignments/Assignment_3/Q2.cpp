// 2 Write a operator overloading code to overload all the arithmetic operators to
// add 2 Distances, 1 Distance and int value and one non member function to add
// int and Distance.


#include<iostream>
using namespace std;

class Distance 
{
    int feet ;
    int inch;
    
    public:

    Distance()
    { this->feet =0;
    this->inch=0;
    }

    Distance(int f , int i)
    { this->feet =f;
    this->inch=i;
    }

    int getFeet()
    {
        return this->feet;

    }

    int getInch()
    {
        return this->inch;
        
    }

    void  setInch(int i)
    {
        this->inch=i;
        
    }
    void  setFeet(int f)
    {
        this->feet=f;
        
    }

    Distance operator+ (Distance d)
    {
        Distance temp;
        temp.setFeet(this->getFeet() + d.getFeet());
        temp.setInch(this->getInch() + d.getInch());
        return temp;
        
    }
      Distance operator+ (int  d)
    {
        Distance temp;
        temp.setFeet(this->getFeet() + d);
        temp.setInch(this->getInch() + d);
        return temp;
        
    }

        
   
  


};

 Distance operator+ ( int a, Distance D1 )
    {
        Distance temp;
        temp.setFeet(D1.getFeet() + a);
        temp.setInch(D1.getInch() + a);
        return temp;
    }

int main()
{
    Distance D1 , D2(15, 25);
    cout << "D2 Is : " << endl<< "Feet = "<< D2.getFeet() <<endl <<"Inches = "<< D2.getInch()<<endl<<endl;

    

    Distance D3=D1+D2;
    cout << "Addition of D3 =  D1 + D2 Is : " << endl<< "Feet = "<< D3.getFeet() <<endl <<"Inches = "<< D3.getInch()<<endl<<endl;
    Distance D4=D2+10;
    cout << "Addition of D4 =  D2 + 10 Is : " << endl<< "Feet = "<< D4.getFeet() <<endl <<"Inches = "<< D4.getInch()<<endl<<endl;

    Distance D5=10+D4;
    cout << "Addition of D5 =  D4 + 10 Is : " << endl<< "Feet = "<< D5.getFeet() <<endl <<"Inches = "<< D5.getInch()<<endl<<endl;


}