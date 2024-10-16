#include<iostream>
using namespace std;
#include<string.h>

class Account
{
  char name[20];
  int accno;
  char acctype[10] ;
  int accbal;

  public :

  Account()
  {
    this->accbal =0;
    this->accno=0;
    strcpy(this->acctype,"Not_Given");
    strcpy(this->name,"Not_Given");
  }

  void display()
  {
    cout<< "Customer Name : "<< this->name<<endl;
    cout<< "Customer Acc. No.  : "<< this->accno<<endl;
    cout<< "Customer Acc . Type  : "<< this->acctype<<endl;
    cout<< "Customer Acc Balance : "<< this->accbal<<endl<<endl;
  }

  void setAccbal (int bal)
  {
    this->accbal= bal;
  }

  int getAccbal ()
  {
   return  this->accbal;
  }
  

  int checkbal(int ramnt)
  {
    if(this->accbal < ramnt )
    {
        cout<<"Insufficinet Balance "<<endl ;
    }
    else 
    {
        this->accbal = this->accbal - ramnt;
    }

  }

};


int main()
{
    Account A;
    cout<< "Requirment No. 1 " << "Default Values of Objects   : " <<endl ;
    A.display();
   
    int bal ;
    cout<<endl<< "Enter Amount To Store : "<<endl;
    cin>>bal;

    A.setAccbal(bal);

    // A.display();

       int ramnt  ;

 cout<<endl<< "Enter Amount  For Withdraw  : "<<endl;
 cin>>ramnt;


    if(A.getAccbal()> A.checkbal(ramnt))
    {
       cout<< "Amount withdrwed Succesfully "<<endl;

    }

  cout<<"Acc . Deatils After Transictios "<<endl;

  A.display();

  cout<<endl<<"Current Balnce After Withdrawing Money : "<< A.getAccbal()<<endl;



}
