#include<iostream>
using namespace std ;

template <class T>
class MyStack
{
   int size ;
   int top ;
   T * ptr;

   public :

   MyStack(int s);

   bool isFull();
   bool isEmpty();
   bool push(T ele);
   bool pop(T& ele);
   T  peek();
   void display();

   
   
   
 };