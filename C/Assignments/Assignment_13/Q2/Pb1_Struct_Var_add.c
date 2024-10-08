#include <stdio.h>

typedef struct Employee
{
    int empId;
    double Sallary;
    char Name[20];

} Employee;

void store(Employee *e)
{
   printf("Enter Employee Id : \n") ;
   scanf("%d",&e->empId);
   printf("Enter Employee Sallary ::\n") ;
   scanf("%d",&e->Sallary);
   printf("Enter Employee Name : \n\n\n") ;
   scanf("%s",e->Name);

}

void display(Employee *e)
{
    
    {
        printf("Employee  Name is: %s\n",e->Name);
        printf("Employee ID : %d\n", e->empId);
        printf("Employee Sallary is: %lf \n\n", e->Sallary);
    }
}

void store(Employee *);
void display(Employee *);

int main()

{
    Employee E1;
    store(&E1);
    display(&E1);
}