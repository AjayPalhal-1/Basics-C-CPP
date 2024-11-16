#include<bits/stdc++.h>
using namespace std;

#include<string.h>

namespace book1
{


  class Book
 {
    char title[20];  // Non Static Variable 
    int isbnno;
    char author[20];
    int pbyear;

    static char labname[20];  // Static Variable 

    public:
    Book();    
    Book(const char* title , int isbn ,const  char* name , int pyear);
    void DisplayInfo(); 
    static void labDisplay();
   
  };
}