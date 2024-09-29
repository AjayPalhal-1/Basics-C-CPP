// 3 Admin (id, name, salary, allowance)

#include<stdio.h>
#include<string.h>

struct admin  
{
    int id;
    int salary;
    int allowance;
    char name[10];

    admin()
    {
        this->allowance=0;
        this->id=0;
        strcpy(this->name,"No_Name_Given");
        this->salary=0;
        
    }

    void disp(admin a)
    {
        printf("Admin Id : %d\n",this->id);
        printf("Admin Allowance : %d\n",this->allowance);
        printf("Admin Salary : %d\n",this->salary);
        printf("Admin Name : %s\n\n",this->name);

    }

    void setId(int idd)
    {
        this->id=idd;
    }

     void setAllowance(int allow)
    {
        this->allowance=allow;
    }

     void setSallary(int sal)
    {
        this->salary=sal;
    }

     void setName(char* nav)
    {
        strcpy(this->name,nav);
    }

    int getId()
    {
        return this->id;
    }
    
    int getAllowance()
    {
        return this->allowance;
    }

    int getSallary()
    {
        return this->salary;
    }

    char* getName()
    {
        return this->name;
    }
    
    
    

};


int main()
{
     admin A1,A2;
    printf("Default Values Of Attributes A1 Are\n\n");

     //Object 1
    A1.disp(A1);

    printf("Default Values Of Attributes A2 Are\n\n");

    A2.disp(A2);


    int pagar, idd,allowance;
    char nav[10];


    printf("\n:::: Now Taking Setters Input  For Object A2 :::: \n");
    printf("Enter The admin ID : ");
    scanf("%d",&idd);
    printf("Enter The admin Sallary  : ");
    scanf("%d",&pagar);
     printf("Enter The admin Allowance : ");
    scanf("%d",&allowance);
    printf("Enter The admin Name : ");
    scanf("%s",nav);

  
    A2.setId(idd);
    A2.setSallary(pagar);
    A2.setName(nav);
    A2.setAllowance(allowance);


   //Object 2

    // int pagar, idd;
    // char nav[10];


    printf("\n:::: Now Taking Setters Input  For Object A1 :::: \n");
    printf("Enter The admin ID : ");
    scanf("%d",&idd);
    printf("Enter The admin Sallary  : ");
    scanf("%d",&pagar);
     printf("Enter The admin Allowance : ");
    scanf("%d",&allowance);
    printf("Enter The admin Name : ");
    scanf("%s",nav);

    A1.setId(idd);
    A1.setSallary(pagar);
    A1.setName(nav);
    A1.setAllowance(allowance);



    // Outputs 

    printf("\n:: Output After setters Using disp Behavoiur For A1 Object :: \n");
    A1.disp(A1);

    printf("\n:: Output After setters Using disp Behavoiur For A2 Object :: \n");
    A2.disp(A2);


    printf("\n\n\n:::: Now Getting  Outputs Using Getters For A2 :::: \n");

    printf("\nadmin ID : %d",A2.getId());
    printf("\nadmin Sallary  : %d",A2.getSallary());
    printf("\nadmin Allowance : %d",A2.getAllowance());
    printf("\nadmin Name : %s\n\n\n",A2.getName());


    printf("\n\n\n:::: Now Getting  Outputs Using Getters For A1  :::: \n");

    printf("\nadmin ID : %d",A1.getId());
    printf("\nadmin Sallary  : %d",A1.getSallary());
    printf("\nadmin Allowance : %d",A1.getAllowance());
    printf("\nadmin Name : %s\n\n\n",A1.getName());
}


