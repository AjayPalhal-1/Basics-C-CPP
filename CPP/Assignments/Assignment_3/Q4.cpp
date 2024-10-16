// 4 Write a operator overloading code to overload relational operator for complex
// and distance.

#include<iostream>
using namespace std;

class Complexno
{

    int realno;
    int imgno;
     public:

     Complexno()
     {
        this->imgno=0;
        this->realno=0;

     }

     Complexno(int i , int r)
     {
        this->imgno=i;
        this->realno=r;

     }

     int getRealno()
     {
      return this->realno;

     }

     int getImgno()
     {
      return this->imgno;

     }

   // Two Complex No .
     int operator<(Complexno C)
     {
      return (this->imgno < C.getImgno()) && (this->getRealno() < C.getRealno());
     }

     int operator<=(Complexno C)
     {
      return (this->imgno <= C.getImgno()) && (this->getRealno() <= C.getRealno());
     }

     int operator>=(Complexno C)
     {
      return (this->imgno >= C.getImgno()) && (this->getRealno() >= C.getRealno());
     }

     int operator>(Complexno C)
     {
      return (this->imgno > C.getImgno()) && (this->realno > C.getRealno());
     }
     int operator==(Complexno C)
     {
      return (this->imgno == C.getImgno()) && (this->realno == C.getRealno());
     }

     int operator!=(Complexno C)
     {
      return (this->imgno != C.getImgno()) && (this->realno != C.getRealno());
     }


     // For 1 Complex and 1 int 

     int operator<(int a)
     {
      return (this->imgno < a) && (this->getRealno() < a);
     }

     int operator<=(int a)
     {
      return (this->imgno <= a) && (this->getRealno() <= a);
     }

     int operator>(int a)
     {
      return (this->imgno > a) && (this->getRealno() > a);
     }

     int operator>=(int a)
     {
      return (this->imgno >= a) && (this->getRealno() >= a);
     }

     int operator==(int a)
     {
      return (this->imgno == a) && (this->getRealno() == a);
     }

     int operator!=(int a)
     {
      return (this->imgno != a) && (this->getRealno() != a);
     }


};

 int operator>(int a , Complexno c )
 {
    return c.getImgno() > a && c.getRealno() > a;
 }

int main()
{
    Complexno C1(10 , 20 ), C2(10,20);
// For 2 Complex No 
    int A = C1 < C2;
    int B = C1 <= C2;
    int C = C1 > C2;
    int D = C1 >= C2;
    int E = C1 == C2;
    int F = C1 != C2;
// For 1 complex 1 int 
int M =15;
    int a = C1 < M;
    int b = C1 <= M;
    int c = C1 > M;
    int d = C1 >= M;
    int e = C1 == M;
    int f = C1 != M;


    // out of class 
    int h =10;
    int l = h > C2;





    cout << "C1 <  C2 : "<<A<<endl;
    cout << "C1 <= C2 : "<<B<<endl;
    cout << "C1 >  C2 : "<<C<<endl;
    cout << "C1 >= C2 : "<<D<<endl;
    cout << "C1 == C2 : "<<E<<endl;
    cout << "C1 != C2 : "<<F<<endl<<endl;

    cout << "C1 <  int M  : "<<a<<endl;
    cout << "C1 <= int M  : "<<b<<endl;
    cout << "C1 >  int M  : "<<c<<endl;
    cout << "C1 >= int M  : "<<d<<endl;
    cout << "C1 == int M  : "<<e<<endl;
    cout << "C1 != int M  : "<<f<<endl;
    cout << "int 10 > C1   : "<<l<<endl;



}
