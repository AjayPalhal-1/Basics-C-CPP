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
{   id=0;
    sal=0;
    strcpy(this->name,"NOT_GIVEN");
}

    Employee(int id , int pagar , char* nav)
{     this->id=id ;
      this->sal=pagar;
      strcpy(this->name,nav);
}

     void  setId(int id)
    {
       this->id;

    }


     void   setSal( int sal)
    {
        this->sal;

    }


     void  setName(char * nav)
    {
       this->name,nav;

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

istream& operator>>(istream& in , Employee& E)
{
    int id=001;
    char name[10];
    int sal = 50000;
    in>>id;
    in>>name;
    in>>sal;

    E.setSal(sal);
    E.setId(id);
    E.setName(name);
    return in;
}


ostream& operator<<(ostream& out , Employee& E)
{
    out<<E.getId()<<endl;
    out<<E.getName()<<endl;
    out<<E.getSal()<<endl;
    return out;
}

// void display( Employee e)
// {
//     cout<<"Employee name : ";
// }

int main()
{
    Employee e1 ;
//cout<<e1;

    cin>>e1;
    cout<<e1;
    // cout<< e1.getId()<<endl;
    // cout<<e1.getName()<<endl;
    // cout<<e1.getSal()<<endl<<endl;


}