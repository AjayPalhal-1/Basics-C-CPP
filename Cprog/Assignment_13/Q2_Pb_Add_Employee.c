#include <stdio.h>

typedef struct Employee
{
    int empId;
    double Sallary;
    char Name[20];

} Employee;

void store(Employee *e, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter Employee ID \n");
        scanf("%d", &e[i].empId);

        printf("Enter Employee Sallary \n");
        scanf("%lf", &e[i].Sallary);

        printf("Enter Employee Name  \n");
        // fflush(stdin);
        scanf("%s", &e[i].Name);
    }
}

void display(Employee *e, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Employee  Name is: %s\n", e[i].Name);
        printf("Employee ID : %d\n", e[i].empId);
        printf("Employee Sallary is: %lf \n\n", e[i].Sallary);
    }
}

void store(Employee *, int);
void display(Employee *, int);

int main()

{
    int size;
    printf(" Enter No. Of Employee You want to store ");
    scanf("%d", &size);

    Employee e[size];
    store(e, size);
    display(e, size);
}