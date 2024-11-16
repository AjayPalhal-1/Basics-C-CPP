//  #include "book.cpp"

#include "book.h" // g++ *.cpp -o main //Compile ./main //Run
using namespace book1;

int main()

{    

  // Book::Book(const char* title , int isbn , const char* name , int pyear)

  Book b1("First_Book", 123 , "AJAY" ,2026 );
  b1.DisplayInfo();

  Book::labDisplay(); 
  
  return 0;
    

}





