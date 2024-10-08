
#include<stdio.h>

typedef struct Employee
{
    char name[20];
    int id ; 
    int sallary ;
    int da;
    int ta ;
    int hra;

}Employee;

void store(Employee* E, int size)
{    for (int i=0 ; i<size ; i++)
{
    printf("\n\nEnter The Name Of Emp :");
    scanf("%s",E[i].name);
      printf("Enter The Id Of Emp :");
    scanf("%s",&E[i].id);
      printf("Enter The DA Of Emp :");
    scanf("%d",&E[i].da);
      printf("Enter The HRA Of Emp :");
    scanf("%d",&E[i].hra);
      printf("Enter The Salary Of Emp :");
    scanf("%d",&E[i].sallary);
      printf("Enter The TA Of Emp :");
      scanf("%d",&E[i].ta);

}


}

double avg (Employee* E , int size )
{    

     double Tsal=0;

    
     for (int i =0 ; i<size; i++)
{
      Tsal = Tsal + E[i].da+E[i].hra+E[i].sallary+E[i].ta;
     
      // Tsal = avg + E[i].sallary ;
}
 printf("\n Gross Salary is  %lf ",Tsal);
     return Tsal /size;
}

void disp(Employee* E , int size   )
{

    for (int i =0; i<size;i++)
    {
    printf("\n\n\nName Of Employee : %s",E[i].name);
     printf("\nEmp Id  :%d",E[i].id);
      printf("\nSalary  Of Employee %d",E[i].sallary);
    printf("\nEmp TA  :%d",E[i].ta);
     printf("\nEmp DA  :%d",E[i].da);
     printf("\nEmp HRA  :%d",E[i].hra);

     printf("\nAverage Salary Is : %lf ", avg(E , size));                   


    }

}


int main ()
{
    int size ;
    printf("Enter How many Emp You want to store :");
    scanf("%d",&size);

    Employee E1[size];
    store(E1,size);
    disp(E1,size);


}