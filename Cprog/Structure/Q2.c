#include<stdio.h>

struct Employee 
{  
    char empName[20];
    int empId ;
    double sallary ;  

};

int main ()
{
    struct Employee E1, E2 ,E3 ;

    printf("Enter Employee E1 Name  : \n");
    scanf("%s", &E1.empName);

    printf("Enter Employee E1 ID  : \n");
    scanf("%d", &E1.empId);
    
    printf("Enter Employee E1 Sallary : \n");
    scanf("%lf", &E1.sallary);

    printf("\n");

     printf("Enter Employee E2 Name  : \n");
    scanf("%s", &E2.empName);

    printf("Enter Employee E2 ID  : \n");
    scanf("%d", &E2.empId);
    
    printf("Enter Employee E2 Sallary : \n");
    scanf("%lf", &E2.sallary);

    printf("\n");
    

    printf("Enter Employee E3 Name  : \n");
    scanf("%s", &E3.empName);


    printf("Enter Employee E3 ID  : \n");
    scanf("%d", &E3.empId);

    printf("\n");
    
    printf("Enter Employee Sallary E3 : \n");
    scanf("%lf", &E3.sallary);

     printf("\n");
     printf("Name of E1 :%s \n",E1.empName);
     printf("ID of E1 : %d\n",E1.empId);
     printf(" Sallary of E1 : %d \n",E1.sallary);

       printf("\n");
     printf("Name of E2 : %s \n",E2.empName);
     printf("ID of E2 :%d\n",E2.empId);
     printf(" Sallary of E2 : %d \n",E2.sallary);

     printf("\n");
     printf("Name of E3 : %s \n ",E3.empName);
     printf("ID of E3 : %d \n",E3.empId);
     printf(" Sallary of E3 : %d\n",E3.sallary);


     if(E1.sallary>E2.sallary) 
     {

     }else 








}