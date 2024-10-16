// Assignment 3

// Operator Overloading

// 1 Write a operator overloading code to overload all the arithmetic operators to
// add 2 complex no, 1 complex no and int value and one non member function to
// add int and complex no.

// 2 Write a operator overloading code to overload all the arithmetic operators to
// add 2 distances, 1 distance and int value and one non member function to add
// int and distance.

// 3 Write a operator overloading code to overload logical operator for complex and
// distance.

// 4 Write a operator overloading code to overload relational operator for complex
// and distance.

// 5 Write a operator overloading code to overload unary operator for complex and
// distance



#include<iostream>
using namespace std;

class complexNo
{
    int imgno ;
    int realno;
    
    // complexNo(){}
    
    public:

    complexNo()
{
    this->imgno=0;
    this->realno=0;

}


complexNo(int r , int i)
{
    this->imgno=i;
    this->realno=r;

}
    void setRealno(int r)
    {
        this->realno=r;
    }
     void setImgno(int i)
    {
        this->imgno=i;
    }

    int getImgno()
    {
        return this->imgno;

    }

    int getRealno()
    {
        return this->realno;
    }

    complexNo operator+( complexNo c2 )
    {
        complexNo c3;
        c3.setImgno(this->imgno+ c2.getImgno() );
        c3.setRealno(this->getRealno() + c2.getRealno());
        return c3;
    }
    complexNo operator-(complexNo c)
    {
        complexNo temp;
        temp.setImgno(this->imgno - c.getImgno());
        temp.setRealno(this->getRealno() - c.getRealno());
        return temp;
    }

     complexNo operator/(complexNo c)
    {
        complexNo temp;
        temp.setImgno(this->imgno / c.getImgno());
        temp.setRealno(this->getRealno() / c.getRealno());
        return temp;
    }


   complexNo operator*(complexNo c)
    {
        complexNo temp;
        temp.setImgno(this->imgno * c.getImgno());
        temp.setRealno(this->getRealno() * c.getRealno());
        return temp;
    }

    complexNo operator+( int a )
    {
        complexNo c3;
        c3.setImgno(this->imgno+ a );
        c3.setRealno(this->getRealno() + a);
        return c3;
    }


};

 complexNo operator+( int a , complexNo c )
    {
        complexNo c3;
        c3.setImgno( c.getImgno() + a);
        c3.setRealno(c.getRealno() + a);
        return c3;
    }


int main()
{
    complexNo A1(10, 20 ),A2(30,40);
    complexNo A3;

    A3 = A1 + A2;


    cout << "A3 (after A1 + A2): " << A3.getRealno() << " + " << A3.getImgno() << "i" << endl;

    A3 = A2 - A1;
    cout << "A3 (after A2 - A1): " << A3.getRealno() << " + " << A3.getImgno() << "i" << endl;


     A3 = A2 / A1;
    cout << "A3 (after A2 / A1): " << A3.getRealno() << " + " << A3.getImgno() << "i" << endl;

    A3 = A2 * A1;
    cout << "A3 (after A2 * A1): " << A3.getRealno() << " + " << A3.getImgno() << "i" << endl;


    A3 = A1 + 50;
        
    cout << "A3 (after A1 + int (50)): " << A3.getRealno() << " + " << A3.getImgno() << "i" << endl;

     int a = 50;

     A3 = a + A1;

   cout << "A3 (after 50 + A1 ): " << A3.getRealno() << " + " << A3.getImgno() << "i" << endl;


     cout<<"Chalo"<<endl;
}