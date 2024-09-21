#include <stdio.h>

typedef struct Employee
{
    int empId;
    double Sallary;
    char Name[20];

} Employee;

Employee store()
{
    Employee temp;
    printf("Enter Employee ID \n");
    scanf("%d", &temp.empId);

    printf("Enter Employee Sallary \n");
    scanf("%lf", &temp.Sallary);

    printf("Enter Employee Name  \n");
    fflush(stdin);
    gets(temp.Name);

    return temp;
}

void display(Employee e)
{
    printf("Employee  Name is: %s\n", e.Name);
    printf("Employee ID : %d\n", e.empId);
    printf("Employee Sallary is: %lf \n", e.Sallary);
}

int main()
{
    Employee e;
    e = store();
    display(e);
}