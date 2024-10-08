// Employee (id, name, salary)


#include<stdio.h>
#include<string.h>

struct Employee
{
    int id ;
    int sallary ;
    char name[10];

    Employee()
    {   printf("\nEmployee Default Const .  Called");
        this->id=0;        
        this->sallary=000000;
        strcpy(this->name,"NoName");
           
    }

        Employee(int id , char* name , int sal)
    {   printf("\nEmployee Param Const . Called");
        this->id=id;       
        this->sallary=sal;
        strcpy(this->name,name);
           
    }

    void setId(int idd)
    {
        this->id=idd;

    }

     void setSallary(int pagar)
    {
        this->sallary=pagar;

    }

     void setname(char* nav)
    {
        strcpy(this->name,nav);

    }

    void Disp( Employee E)
    {
        printf("Emp Id : %d\n",id);
        printf("Emp Sallary : %d\n",sallary);
        printf("Emp Name : %s\n\n\n",name);

    }

    int getId()
    {
        return this->id;
    }

    int getSallary()
    {
        return this->sallary;
    }

    char* getName()
    {
        return this->name;
    }

      void Edisplay ()
    {        
        printf("\nEmp Param Vala Called \n");

        printf("\nEmp Id  Is : %d ",this->id);
        printf("\nEmp Id  Name Is : %s",this->name);
        printf("\nEmp Salary  Is  : %d",this->sallary);



    }
};

struct Hr :public Employee
{
    int commission; 


    Hr()
    {
        printf("\n HR Default Cons Callled");
    }

     Hr(int id , int sal , char* name,int commision): Employee ( id,name,sal)
    {
        printf("\nHR Param Vala Called \n\n");
        this->commission=commision;
    }

    void Hdisplay ()
    {
       // Edisplay();
      // Employee::Edisplay();
       this->Edisplay();
       printf("\nHr Commission Is : %d\n\n",this->commission);
    }
};


int main()
{
    Employee E(102, "ANKUSH", 40000);
    Hr H(101,100000, "Pravin", 5000);
    // E.Edisplay();
    H.Hdisplay();


    return 0 ;
}

