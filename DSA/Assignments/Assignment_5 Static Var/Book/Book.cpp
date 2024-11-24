// Assignment – (Static)
// 1.
// Create a class Book with members as bid,bname,price and author.Add following methods:
// a. Constructor (Support both parameterized and parameterless)
// b. Destructor
// c. ShowBook
// d. Add static variable count and also maintain count of objects created.

#include"Book.h"
  int Book::count =0;

  Book :: Book( ) //PC
     {
        this->autor="Not_Given";
        this->bId=0;
        this->bname="Not_Given";
        this->price=0;
        count ++;
     }

  Book:: Book(int id , string bname , int price ,string autor ) //PC
     {
        this->autor=autor;
        this->bId=id;
        this->bname=bname;
        this->price=price;
        count++;
        
     }

     void Book:: showBook()
     {
        cout<<"Author Name : "<<this->autor<<endl;
        cout<<"Book ID     : "<<this->bId<<endl;
        cout<<"Book Name   : "<<this->bname<<endl;
        cout<<"Book Price  : "<<this->price<<endl<<endl;
        cout<<" Object Count : "<<this->count<<endl<<endl;


     }