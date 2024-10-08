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
        printf("Default (0) Param  Vala Constructor\n");
        this->allowance=0;
        this->id=0;
        strcpy(this->name,"No_Name_Given");
        this->salary=0;
        
    }

    admin(int id , int sal , int allowance , char* nav)
    {
        printf("4 Param Vala Constructor\n");
        this->allowance=allowance;
        this->id=id;
        strcpy(this->name,nav);
        this->salary=sal;
        
    }

     admin(int id , int sal )
    {
        printf("2 Param Vala Constructor\n");
        this->salary=sal;
        this->id=id;
        
      
        
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
     admin A1(101,100000 ,10000 , "Garib"),A2(201,200000),A3;

     //Object 1
    A1.disp(A1);


    A2.disp(A2);
    A2.disp(A2);



    int pagar, idd,allowance;
    char nav[10];


    printf("\n:::: Now Taking Setters Input  For Object A2 :::: \n");
    // printf("Enter The admin ID : ");
    // scanf("%d",&idd);
    // printf("Enter The admin Sallary  : ");
    // scanf("%d",&pagar);
     printf("Enter The admin Allowance : ");
    scanf("%d",&allowance);
    printf("Enter The admin Name : ");
    scanf("%s",nav);

  
    // A2.setId(idd);
    // A2.setSallary(pagar);
    A2.setName(nav);
    A2.setAllowance(allowance);





    // Outputs 

   
    printf("\n\n\n:::: Now Getting  Outputs Using Getters For A1  :::: \n");

    printf("\nadmin ID : %d",A1.getId());
    printf("\nadmin Sallary  : %d",A1.getSallary());
    printf("\nadmin Allowance : %d",A1.getAllowance());
    printf("\nadmin Name : %s\n\n\n",A1.getName()); 


    printf("\n\n\n:::: Now Getting  Outputs Using Getters For A2 :::: \n");

    printf("\nadmin ID : %d",A2.getId());
    printf("\nadmin Sallary  : %d",A2.getSallary());
    printf("\nadmin Allowance : %d",A2.getAllowance());
    printf("\nadmin Name : %s\n\n\n",A2.getName());


    printf("\n\n\n:::: Now Getting  Outputs Using Getters For A3 :::: \n");

    printf("\nadmin ID : %d",A3.getId());
    printf("\nadmin Sallary  : %d",A3.getSallary());
    printf("\nadmin Allowance : %d",A3.getAllowance());
    printf("\nadmin Name : %s\n\n\n",A3.getName());


}


