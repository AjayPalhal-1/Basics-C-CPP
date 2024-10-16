// Assignment 3


// 3 Write a operator overloading code to overload logical operator for complex and
// distance.



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

    int  operator&&( complexNo c2 )
    {
        complexNo c3;
        // c3.setImgno(this->imgno&& c2.getImgno() );
        // c3.setRealno(this->getRealno() && c2.getRealno());
        // return (c3.setImgno(this->imgno && c2.getImgno())) && (c3.setRealno(this->getRealno() && c2.getRealno()));
        return (this->imgno && c2.getImgno()) && (this->getRealno() && c2.getRealno());


    }


    int  operator||(complexNo c)
    {
        return this->getImgno() || c.getImgno() && this->getRealno() || c.getRealno();
    }

//      int  operator/(complexNo c)
//     {
//                 return this->getImgno() || c.getImgno() && this->getRealno() || c.getRealno();

//     }


//    complexNo operator*(complexNo c)
//     {
//         complexNo temp;
//         temp.setImgno(this->imgno * c.getImgno());
//         temp.setRealno(this->getRealno() * c.getRealno());
//         return temp;
//     }

    // complexNo operator&&( int a )
    // {
    //     complexNo c3;
    //     c3.setImgno(this->imgno&& a );
    //     c3.setRealno(this->getRealno() && a);
    //     return c3;
    // }


};

 complexNo operator&&( int a , complexNo c )
    {
        complexNo c3;
        c3.setImgno( c.getImgno() && a);
        c3.setRealno(c.getRealno() && a);
        return c3;
    }


int main()
{
    complexNo A1(10, 20 ),A2(30,0);
    complexNo A3;

    int a  = A1 && A2;


    cout << "A1 && A): " << a  << endl;

    int b  = A2 || A1;
    cout << "A2 || A1: " <<b  << endl;


//      A3 = A2 / A1;
//     cout << "A3 (after A2 / A1): " << A3.getRealno() << " / " << A3.getImgno() << "i" << endl;

//     A3 = A2 * A1;
//     cout << "A3 (after A2 * A1): " << A3.getRealno() << " * " << A3.getImgno() << "i" << endl;


//     A3 = A1 && 50;
        
//     cout << "A3 (after A1 && int (50)): " << A3.getRealno() << " && " << A3.getImgno() << "i" << endl;

//      int a = 50;

//      A3 = a && A1;

//    cout << "A3 (after 50 && A1 ): " << A3.getRealno() << " && " << A3.getImgno() << "i" << endl;


}