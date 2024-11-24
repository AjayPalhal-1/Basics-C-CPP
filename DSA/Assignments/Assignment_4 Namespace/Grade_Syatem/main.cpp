#include<string.h>
#include"systd.cpp"
#include "tystd.cpp"
// #include<iostream>
// using namespace std;


using namespace SY;
using namespace TY;



class Student 
{
private:
    char name[10];
    int rollnum;

public:

     char* getName()
     {
        return this->name;
     }

     int getRollNum()
     {
        return this->rollnum;
     }
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

   void  display(SY::SYMARKS& sy,TY::TYMARKS& ty )
    {
        cout<<endl<<"Student Name      : " << this->name<<endl;
        cout<<"Student Roll Num  : " << this->rollnum;
        cout<<endl<<"Second Year Marks : " <<endl<<endl;
        cout<<"Computer Sub  Marks : " << sy.getCompTotal()<<endl;
        cout<<"Eletronics Sub Marks : " << sy.getEntcTotal()<<endl;
        cout<<"Math Sub Marks : " << sy.getMathTotal()<<endl;
        cout<<endl<<"Third  Year Marks : " <<endl<<endl;
        cout<<"Practical  Marks : " << ty.getPractmarks()<<endl;
        cout<<"Practical  Marks : " << ty.getTheorymarks()<<endl;
    }


};

void calGrade(SY::SYMARKS& sy,TY::TYMARKS& ty  , Student s)
{
    int total = (sy.getCompTotal()+ty.getPractmarks() + sy.getEntcTotal() + sy.getMathTotal() + ty.getTheorymarks())/5;
    cout<<endl<<endl<<"Total Marks : "<<total<<endl<<endl; 

    if(total>= 70)
    {
           cout<<"\n\n\n";

     cout<<"Student Name  : "<<s.getName()<<endl;
     cout<<"Student Roll No. :"<<s.getRollNum()<<endl;
     cout<<"Your Grade Is : A "; 
              cout<<"\n\n\n";



    }
    else if(total>=60)
    {
         cout<<"\n\n\n";
     cout<<"Student Name  : "<<s.getName()<<endl;
     cout<<"Student Roll No. :"<<s.getRollNum()<<endl;
     cout<<"Your Grade Is : B "<<endl; 
              cout<<"\n\n\n";



    }
     else if(total>=50)
    {
        cout<<"\n\n\n";

     cout<<"Student Name  : "<<s.getName()<<endl;
     cout<<"Student Roll No. :"<<s.getRollNum()<<endl;
     cout<<"Your Grade Is : C "<<endl; 
              cout<<"\n\n\n";



    }
     else if(total>=40)
    {
           cout<<"\n\n\n";

     cout<<"Student Name  : "<<s.getName() <<endl;
     cout<<"Student Roll No. :"<<s.getRollNum()<<endl;
     cout<<"Bro You Failed As Student  "<<endl; 
             cout<<"\n\n\n";


    }
}




int main()
{
    Student S1(99,"AJAY_PALHAL");

    SY::SYMARKS sy(20,50,50);
    TY::TYMARKS ty(100,100);

    S1.display(sy,ty);

    calGrade( sy, ty , S1 );

    
    



}