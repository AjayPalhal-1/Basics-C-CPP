#include<string.h>
#include"systd.h"
#include "tystd.h"

using namespace SY;
using namespace TY;



class Student 
{
private:
    char name[10];
    int rollnum;

public:
    Student ()
    {
        strcpy(this->name,"Not_Given");
        this->rollnum=0;
    }
    Student ( int r, char* nav)
    {
        strcpy(this->name,nav);
        this->rollnum=r;

    }


};



int main()
{
    Student S1(99,"AJAY");

    SY::SYMARKS(50,50,50);
    TY::TYMARKS(100,100);
    
    



}