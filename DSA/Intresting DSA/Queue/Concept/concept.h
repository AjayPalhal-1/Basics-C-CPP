#include<iostream>
using namespace std;


class CQ
{
    int front ;
    int rear;
    int size ;
    int * ptr;

    public:

    CQ(int s );

   bool isFull();
   bool isEmpty();
   void Insert(int);
   void Delete(int&);
   void Display();


};