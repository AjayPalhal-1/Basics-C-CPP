#include<iostream>
using namespace std;

#include<string.h>


class Student
{
    int rollno;
    int marks;
    char name[20];
    int sub1,sub2,sub3;

    public :

    Student()
    {
        this->marks=0;
        this->rollno=0;
        strcpy(this->name,"NOT_GIVEN ");
    }


     Student(int rn, int mrk , char* nav)
    {
        this->marks=mrk;
        this->rollno=rn;
        strcpy(this->name,nav);
    }


    void setMarks(int mrk )
    {
        this->marks=mrk;
    }

    void setRollno(int rn )
    {
        this->rollno=rn;
    }
    void setName(char*  nav )
    {
        strcpy(this->name,nav);  
     }


     char*  getName()
     {
        return this->name;
     }

     int   getRollno()
     {
        return this->rollno;
     }

   

     void setSub1marks(int mrk)
     {
        this->sub1=mrk;
     }
      void setSub2marks(int mrk)
     {
        this->sub2=mrk;
     }
      void setSub3marks(int mrk)
     {
        this->sub3=mrk;
     }

     int getSub1marks()
     {
        return this->sub1;
     }

     int getSub2marks()
     {
        return this->sub2;
     }

     int getSub3marks()
     {
        return this->sub3;
     }


};

int Grade( int  sub1 , int sub2 , int sub3 )
{
   return sub1+sub2+sub3;
}

int main()
{

   

    Student S2 ;

    int sub1;
    cout << "enter Subjec 1 Marks : "<< endl;
    cin>> sub1;

    S2.setSub1marks( sub1 );

    int sub2;
    cout << "enter Subjec 1 Marks : "<< endl;
    cin>> sub2;

    S2.setSub2marks( sub2 );


    int sub3;
    cout << "enter Subjec 1 Marks : "<< endl;
    cin>> sub3;

    S2.setSub3marks( sub3 );

    cout<< "Enter Name Of Student : "<<endl;
    char nav[10];
    cin>> nav;
    S2.setName( nav );

     cout<< "Enter Roll No  Of Student : "<<endl;
    int roll;
    cin>> roll;
    S2.setRollno( roll );


    cout<<"Student Grade : "<<endl;

    //cout<<S2.getSub1marks()<<S2.getSub2marks()<< S2.getSub3marks();

    int totalm = Grade(S2.getSub1marks(),S2.getSub2marks() , S2.getSub3marks());
    cout<< "Total mark : "<< totalm;



    if(totalm >= 80)
    {
        cout <<"Student Grade : Exellent ";

    }
    else if(totalm >= 65)
    {
        cout <<"Student Grade : Good ";
        
    }
    else if(totalm >= 50 )
    {
        cout <<"Student Grade : Pass ";
        
    }

   else  if(totalm >50)
    {
        cout <<"Student Grade : Failed Bro ";
        
    }

    
}