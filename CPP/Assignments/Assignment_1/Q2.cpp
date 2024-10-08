// Employee (id, name, salary)


#include<stdio.h>
#include<string.h>

struct Employee
{
    int id ;
    int sallary ;
    char name[10];

    Employee()
    {   printf("Default  Const> Called\n");
        this->id=0;        
        this->sallary=000000;
        strcpy(this->name,"No_Name_Given");
           
    }
    Employee(char* Nav, int sal, int id)
    {
       printf("3 Parame vala Const Called\n");
      this->id=id;        
        this->sallary=sal;
        strcpy(this->name,Nav);
           
    }
    Employee(int id)
    {
        printf("1 Parame vala Const Called\n\n");
        this->id=id;        
     
           
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
     void Disp( Employee E)
    {
        printf("Emp Id : %d\n",id);
        printf("Emp Sallary : %d\n",sallary);
        printf("Emp Name : %s\n\n\n",name);

    }
};


int main()
{
    Employee E1("Garib",500000,201),E2,E3(201),E4;



    // Setter for E2
     //Object 2
    int pagar, idd;
    char nav[10];


    printf("\n:::: Now Taking Setters Input  For Object E2 :::: \n");
    printf("Enter The Employee ID : ");
    scanf("%d",&idd);
    printf("Enter The Employee Sallary  : ");
    scanf("%d",&pagar);
    printf("Enter The Employee Name : ");
    scanf("%s",nav);

    E2.setId(idd);
    E2.setSallary(pagar);
    E2.setname(nav);

     //Object 1
    E1.Disp(E1);
    E2.Disp(E2);
    E3.Disp(E3);  

    // Outputs 



    printf("\n\n\n:::: Now Getting  Outputs Using Getters For E1  :::: \n");

    printf("\nEmployee ID : %d",E1.getId());
    printf("\nEmployee Sallary  : %d",E1.getSallary());
    printf("\nEmployee Name : %s\n\n\n",E1.getName());


    printf("\n\n\n:::: Now Getting  Outputs Using Getters For E2  :::: \n");

    printf("\nEmployee ID : %d",E2.getId());
    printf("\nEmployee Sallary  : %d",E2.getSallary());
    printf("\nEmployee Name : %s\n\n\n",E2.getName());




     printf("\n\n\n:::: Now Getting  Outputs Using Getters For E3 :::: \n");

    printf("\nEmployee ID : %d",E3.getId());
    printf("\nEmployee Sallary  : %d",E3.getSallary());
    printf("\nEmployee Name : %s\n\n\n",E3.getName());


     printf("\n\n\n:::: Now Getting  Outputs Using Getters For E4 :::: \n");

    printf("\nEmployee ID : %d",E4.getId());
    printf("\nEmployee Sallary  : %d",E4.getSallary());
    printf("\nEmployee Name : %s\n\n\n",E4.getName());
    return 0 ;
}

