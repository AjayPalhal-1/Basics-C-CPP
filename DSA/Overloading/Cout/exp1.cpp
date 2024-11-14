#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
    int id ; 
    int sal ;
    char name[10];

    public:
    Employee()
{    id=0;
     sal=0;
    strcpy(this->name,"NOT_GIVEN");
}

    Employee(int id , int pagar , char* nav)
{     this->id=id ;
      this->sal=pagar;
      strcpy(this->name,nav);
}

     int  getId()
    {
       return this->id;

    }


     int  getSal()
    {
       return this->sal;

    }


     char*  getName()
    {
       return this->name;

    }

};

ostream& operator<<(ostream& out , Employee E)
{
    out<<E.getId()<<endl;
    out<<E.getName()<<endl;
    out<<E.getSal()<<endl;
    return out;
}


int main()
{
    Employee e1 (102, 6000,"Garib");
    cout<<e1;

    // cout<< e1.getId()<<endl;
    // cout<<e1.getName()<<endl;
    // cout<<e1.getSal()<<endl<<endl;


}