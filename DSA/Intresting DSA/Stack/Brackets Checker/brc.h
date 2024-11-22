#include<iostream>
using namespace std;

class Bracket 
{ 
    int size;
    int top;
    int * ptr;

    public:

    Bracket(int );
   bool isFull();
   bool isEmpty();
   bool push(int ele);
   bool pop(int& ele);
   int  peek();
   void display();

    




};