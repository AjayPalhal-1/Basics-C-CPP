// SalesManager (id, name, salary, incentive, target)

#include<stdio.h>
#include<string.h>


struct SalesManager
{
    int id ;
    char name[30];
    int salary;
    int incentive;
    int target;


 

    SalesManager()
    {
        this->id=0;
        this->incentive=0;
        strcpy(this->name,"Not_Given");
        this->salary=0;
        this->target=0;        
    }
      
       SalesManager(int id , int incen ,char* nav,int sal,int target)
    {
        this->id=id;
        this->incentive=incen;
        strcpy(this->name,nav);
        this->salary=sal;
        this->target=target;        
    }

    void setId(int id)
    {
        this->id=id;
    }
    void setIncentive(int incentive)
    {
        this->incentive=incentive;
    }
    void setName(char* nav)
    {
        strcpy(this->name,nav);
    }
    void setSallary(int sal)
    {
        this->salary=sal;
    }
    void setTarget(int target)
    {
        this->target=target;
    }

    int getid()
    {
        return this->id;
    }

     int getSalary()
    {
        return this->salary;
    }
     int getIncentive()
    {
        return this->incentive;
    }

     char* getName()
    {
        return this->name;
    }

     int getTarget()
    {
        return this->target;
    }   
    


};


int main()
{
    SalesManager s1 ,s2(101,2400,"DON",600000,10);
   
   //Setter For S1
    s1.setId(10);
    s1.setIncentive(100);
    s1.setName("AJAY");
    s1.setSallary(500000);
    s1.setTarget(2);

    // Getter For S2
    printf("Outout Using Getter Of S2\n\n");
    printf("Sales Mang. ID : %d\n",s2.getid());
    printf("Sales Mang. Incentive : %d\n",s2.getIncentive());
    printf("Sales Mang. Name : %s\n",s2.getName());
    printf("Sales Mang. Sallary : %d\n",s2.getSalary());
    printf("Sales Mang. Target : %d\n\n\n",s2.getTarget());

       // Getter For S1
       printf("Outout Using Getter Of S1\n\n");
    printf("Sales Mang. ID : %d\n",s1.getid());
    printf("Sales Mang. Incentive : %d\n",s1.getIncentive());
    printf("Sales Mang. Name : %s\n",s1.getName());
    printf("Sales Mang. Sallary : %d\n",s1.getSalary());
    printf("Sales Mang. Target : %d\n\n\n",s1.getTarget());



     
   



}
