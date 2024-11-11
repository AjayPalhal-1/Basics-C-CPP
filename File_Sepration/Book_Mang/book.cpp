

#include"book.h"


 namespace book1
 {


  Book ::  Book()
    {
        strcpy(title,"NOT_GVEN");
        isbnno=0;
        strcpy(author,"NOT_GIVEN");
        pbyear=0;
    }

    Book::Book(char* title , int isbn , char* name , int pyear)
    {
        strcpy(this->author,name);
        this->isbnno=isbn;
        this->pbyear=pyear;
        strcpy(this->title,title);

    }

    void Book::DisplayInfo()
    {
        cout<<"Book Title            : "<<this->title<<endl;
        cout<<"Book ISBN No.         : "<<this->isbnno<<endl;
        cout<<"Book Publication Year : "<<this->pbyear<<endl;
        cout<<"Author Name           : "<<this->author<<endl<<endl<<endl;
    }
 }

