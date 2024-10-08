// 4 HR (id, name, salary, commission)

#include<stdio.h>

#include <stdio.h>

typedef struct HR
{
    char Name[32];
    int id;
    int salary;
    int commision;

} HR;

HR store()
{
    HR temp;
    printf("Enter HR Name\n");
    scanf("%s",temp.Name);
    // fflush(stdin);
    // gets(temp.Name);

    printf("Enter HR id \n");
    scanf("%d", &temp.id);

    printf("Enter HR salary \n");
    scanf("%d", &temp.salary);

    printf("Enter HR Commision \n");
    scanf("%d", &temp.commision);

    return temp;
}

void display(HR H)
{
    printf("HR  Name is: %s\n", H.Name);
    printf("HR id is: %d\n", H.id);
    printf("HR  salary  is: %d \n", H.salary);
    printf("HR  Commision  is: %d \n", H.commision);
}
int main()
{

    HR H;
    H = store();

    display(H);
}