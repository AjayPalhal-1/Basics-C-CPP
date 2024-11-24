#include<iostream>
using namespace std ;


class MystringStack
{
   int size ;
   int top ;
   char * ptr;

   public :

   MystringStack(int s);

   bool isFull();
   bool isEmpty();
   bool push(char ele);
   bool pop(char& ele);
   char  peek();
   void display();

   
   
   
 };