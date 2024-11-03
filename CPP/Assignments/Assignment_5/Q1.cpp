// Assignment 4
// Inheritance
// 1. Design a system for managing employee information using object-oriented
// principles, specifically focusing on inheritance. Implement a base class Employee
// with essential attributes such as eid (employee ID), ename (employee name), and
// salary. The Employee class should have a constructor, setter, getter, display, and a
// member function to calculate the salary based on the specific employee type.
// Derive three classes from the base class: HR, SalesManager, and Admin. Each
// derived class should have its own set of attributes and methods, along with
// inheriting the attributes and methods from the base class.





#include<string.h>
#include<iostream>
using namespace std;


class Employee
{
  int id;
  double salary ;
  char name[10];

  public:


// Default Constructor: Initializes the attributes.

  Employee()
  {
    this->id=0;
   strcpy(this->name,"NOT_GIVEN");
   this->salary=0;
  }

  //   Constructor: Initializes the attributes.

  Employee(int id , char* nav , double sal)
  {
    this->id=id;
   strcpy(this->name,nav);
   this->salary=sal;
  }

// Setter: Sets values for attributes.

  void setId(int id )

  {
    this->id=id;
  }
  void setName(char* nav)
  {
      strcpy (this->name,nav);
  }

  void setSalary (double sal )
  {
    this->salary=sal;
  }

  // Getter: Retrieves values of attributes.

  int getId()
  {
    return this->id;
  }
  char* getName()
  {
    return this->name;
  }

  double getSalary()
  {
   return  this->salary;
  }

  // Display: Displays employee information. 


  void Empdisplay()
  {
    cout<< "Emp ID      : "<< this->getId()<<endl;
    cout<< "Emp Name    : "<< this->getName()<<endl;
    cout<< "Emp Salary  : "<< this->getSalary()<<endl<<endl;
   
  }

//  CalculateSalary: Calculates and returns the salary.
  virtual void calsalary()
  {
     cout <<"Basic Salary : "<<this->getSalary()<<endl<<endl;
  }


};

class HR : public Employee
{
    private :
    double commision ;

    public:

// Default Constructor: Initializes the attributes.
 
    HR():Employee()
    {
        this->commision=0;
    }

    //  Constructor: Initializes the attributes.

    HR(int id , char* nav , double sal , double  commision ):Employee(id, nav, sal )
    {

        this->commision=commision;
    }
// Setter: Sets values for attributes Of HR .

  void setCommision(double commision)
{
    this->commision=commision;

}

  // Getter: Retrieves values of attributes Of HR .

  double GetCommision()
  {
    return this->commision;
  }


  // Display: Displays HR information. 

  void Hrdisplay()
  {
  
    this->Empdisplay();
    cout<<"Hr Commission Is : "<<this->GetCommision()<<endl<<endl;
  }

//  CalculateSalary: Calculates and returns the salary.

  void calsalary()
  {
    cout<<"Hr Total Salary : "<< this->getSalary()+ this->GetCommision()<<endl<<endl;

  }


};

class SalesManeger : public Employee
{
    private :

    int incentive ;
    int target ;

    public : 

// Default Constructor: Initializes the attributes.

    SalesManeger():Employee()
    {
        this->target=0;
        this->incentive=0;
    }


    //  Constructor: Initializes the attributes.

    SalesManeger(int id , char* nav , double sal ,int  target , int incentive ):Employee(id , nav, sal)
    {
        this->incentive=incentive;
        this->target=target;
    }

    // Setter: Sets values for attributes Of SM .
    void setIncentive(int inc )
    {
        this->incentive=inc;
    }

    void setTarget(int tar)
   {
    this->target=tar;
   }

     // Getter: Retrieves values of attributes Of HR .
     int getTarget()
     {
        return this->target;

     }

     int getIncentive()
     {
        return this->incentive;
     }

       // Display: Displays SM information. 

     void Display()
     {
        this->Empdisplay();
        cout<<"SM Target     : "<<this->getTarget()<<endl;
        cout<<"SM Incentive  : "<<this->getIncentive()<<endl;
     }   

     //  CalculateSalary: Calculates and SM's salary.

  void calsalary()
  {
     cout<<"SM's Basic Salary  : "<< this->getSalary()<<endl;
     cout<<"SM's Incentive     : "<<this->getIncentive()<<endl;    
     cout<<"SM's Total Salary  : "<< this->getSalary()+ this->getIncentive()<<endl<<endl;

  }
};


class Admin : public Employee
{
    private :

    int allowance ;

    public :

    // Default Constructor: Initializes the attributes.

    Admin():Employee()
    {
        this->allowance=0;

    }

    //  Constructor: Initializes the attributes.

    Admin(int id , char* nav , double Sal , int allowance ):Employee(id , nav, Sal)
    {
        this->allowance=allowance;

    }

        // Setter: Sets values for attributes Of Admin .
    
    void setAllowance(int allow)
    {
        this->allowance=allow;
    }
         // Getter: Retrieves values of attributes Of HR .
      int GetAllowance()
      {
        return this->allowance;
      }

       // Display: Displays Admin information. 

       void Display()
       {

        this->Empdisplay();
        cout<<"Admins Allowance : "<<this->GetAllowance()<<endl<<endl;


       }

       // Cal Salary for Admin

       void calsalary()
       {

        cout<<"Admins Allowance      : "<<this->GetAllowance()<<endl;
        cout<<"Basic Salary of Admin : "<<this->getSalary()<<endl;
        cout<<"Total Salary Of Admin : "<<this->getSalary()+ this->GetAllowance()<<endl<<endl;
       }
};



int main()
{

    Employee E1(102 , "AJAY", 500000);
    E1.Empdisplay();
    E1.calsalary();

    HR H1(102, "ANKUSH", 30000, 5000);
    H1.Hrdisplay();
    H1.calsalary();

    SalesManeger S1(103, "Pravin" , 450000, 50, 50000);
    S1.Display();
    S1.calsalary();

    Admin A1(104, "Mutthe", 25000, 10000);
    A1.Display();
    A1.calsalary();




}
