// Employee (id, name, salary)


#include<stdio.h>
#include<string.h>

struct Employee
{
    int id ;
    int sallary ;
    char name[10];

    Employee()
    {
        this->id=0;        
        this->sallary=000000;
        strcpy(this->name,"NoName");
           
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
};


int main()
{
    Employee E1,E2;
    printf("Default Values Of Attributes E1 And E2 Are\n\n");

     //Object 1
    E1.Disp(E1);
    E2.Disp(E2);


    int pagar, idd;
    char nav[10];


    printf("\n:::: Now Taking Setters Input  For Object E1 :::: \n");
    printf("Enter The Employee ID : ");
    scanf("%d",&idd);
    printf("Enter The Employee Sallary  : ");
    scanf("%d",&pagar);
    printf("Enter The Employee Name : ");
    scanf("%s",nav);

  
    E1.setId(idd);
    E1.setSallary(pagar);
    E1.setname(nav);

   //Object 2
    // int pagar, idd;
    // char nav[10];


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


    // Outputs 

    printf("\n:: Output After setters Using Disp Behavoiur For E1 Object :: \n");
    E1.Disp(E1);

    printf("\n:: Output After setters Using Disp Behavoiur For E2 Object :: \n");
    E2.Disp(E2);


    printf("\n\n\n:::: Now Getting  Outputs Using Getters For E1  :::: \n");

    printf("\nEmployee ID : %d",E1.getId());
    printf("\nEmployee Sallary  : %d",E1.getSallary());
    printf("\nEmployee Name : %s\n\n\n",E1.getName());


    printf("\n\n\n:::: Now Getting  Outputs Using Getters For E2  :::: \n");

    printf("\nEmployee ID : %d",E2.getId());
    printf("\nEmployee Sallary  : %d",E2.getSallary());
    printf("\nEmployee Name : %s\n\n\n",E2.getName());

    return 0 ;
}

