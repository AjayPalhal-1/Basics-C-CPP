#include<iostream>
using namespace std ;


class MyStack
{
   int size ;
   int top ;
   int * ptr;

   public :

   MyStack(int s);

   bool isFull();
   bool isEmpty();
   bool push(int ele);
   bool pop(int& ele);
   int  peek();
   void display();

   
   
   
 };