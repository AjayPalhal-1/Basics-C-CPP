
#include<iostream>
using namespace std;

#include<string.h>

class Book
{
    private:

    char title[20];
    int isbnno;
    char author[20];
    int pbyear;

    public:
    Book()
    {
        strcpy(title,"NOT_GVEN");
        isbnno=0;
        strcpy(author,"NOT_GIVEN");
        pbyear=0;
    }

    Book(char* title , int isbn , char* name , int pyear)
    {
        strcpy(this->author,name);
        this->isbnno=isbn;
        this->pbyear=pyear;
        strcpy(this->title,title);

    }

    void DisplayInfo()
    {
        cout<<"Book Title            : "<<this->title<<endl;
        cout<<"Book ISBN No.         : "<<this->isbnno<<endl;
        cout<<"Book Publication Year : "<<this->pbyear<<endl;
        cout<<"Author Name           : "<<this->author<<endl<<endl<<endl;
    }


};

class NonFiction : Book
{
    private :

    char refrance[5];
    char subject[10];

    public :

   
     NonFiction():Book()
    {
        strcpy(refrance,"Not_Mention");
        strcpy(subject,"Not_Mention");

    }

 NonFiction(char* title , int isbn ,  char* name,int pyear,   char* sub, char* ref ):Book( title,isbn, name , pyear)
    {
        strcpy(refrance,ref);
        strcpy(subject,sub);

    }

    void DisplayInfo()
    {
        Book::DisplayInfo();
        cout<<"Book Referance    : "<<this->refrance<<endl;
        cout<<"Book Subject Name : "<<this->subject<<endl<<endl;
    }




};


class textbook : Book 
{
    char edition[5];
    char  coursecode[5];

    public:

    textbook():Book()
    {
        strcpy(this->coursecode,"Not_Provided");

        strcpy(this->edition,"Not_Given");

    
    }
     textbook(char* title , int isbn , char* name , int pyear,char* ccode,char* edition):Book(title , isbn , name , pyear)
    {
        strcpy(this->coursecode,ccode);

        strcpy(this->edition,edition);

    
    }
   void DisplayInfo()
    {
        Book::DisplayInfo();
        cout<<"Book Edition      : "<<this->edition<<endl;
        cout<<"Book Course Code  : "<<this->coursecode<<endl<<endl;
    }



};




int main()
{   cout<<"Book Details : " <<endl<<endl;
    Book B1("MY_Book",1234,"Mrs_Me",2026);
    B1.DisplayInfo();

    NonFiction NF("First_Book",2345,"Mrs_AP",2027,"Philosopy","My_Life");
    cout<<"Non Fiction Book Deatils :"<<endl<<endl;
    NF.DisplayInfo();

    textbook T1("Clg_Book",5678,"Mrs_Ajay",2029,"AP123","1st");
    cout<<"TextBook Deatils :"<<endl<<endl;
    T1.DisplayInfo();


    cout<<"Default Constrctor :"<<endl<<endl;


    cout<<"Book Details : " <<endl<<endl;
    Book B;
    B.DisplayInfo();

    NonFiction NF1;
    cout<<"Non Fiction Book Deatils :"<<endl<<endl;
    NF1.DisplayInfo();

    textbook T;
    cout<<"TextBook Deatils :"<<endl<<endl;
    T.DisplayInfo();
}