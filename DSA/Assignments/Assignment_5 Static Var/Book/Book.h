// Assignment – (Static)
// 1.
// Create a class Book with members as bid,bname,price and author.Add following methods:
// a. Constructor (Support both parameterized and parameterless)
// b. Destructor
// c. ShowBook
// d. Add static variable count and also maintain count of objects created.

#include<iostream>
using namespace std;
#include<string.h>



class  Book
{
private:
int bId ;         // Non Static Varibles
string bname ;
int price;
string autor;

static int count ; // Static Varible 

public:
     Book(); // DC
     Book(int  , string , int  , string ); //PC
     void showBook();
    
};

 
