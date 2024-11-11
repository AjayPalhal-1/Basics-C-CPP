#include<bits/stdc++.h>
using namespace std;

#include<string.h>

namespace book1
{


  class Book
 {
    char title[20];
    int isbnno;
    char author[20];
    int pbyear;

    public:
    Book();    
    Book(char* title , int isbn , char* name , int pyear);
    void DisplayInfo();    


  };
}