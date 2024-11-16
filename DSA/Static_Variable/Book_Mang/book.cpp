

#include"book.h"


 namespace book1
 {
    


  Book::Book()  // DC
    {
        strcpy(title,"NOT_GVEN");
        isbnno=0;
        strcpy(author,"NOT_GIVEN");
        pbyear=0;
    }



    Book::Book(const char* title , int isbn , const char* name , int pyear) // PC
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
        cout<<"Author Name           : "<<this->author<<endl<<endl;
    }

     char labname[20]="CLG_LABRARY";  // Static Variable Assigned in .cpp File 

        void  book1::Book::labDisplay()
    {
        cout<< "Lab Name : "<<book1::labname<<endl<<endl;
    }
 }

