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

 HR  store(HR* H)
{
    
    printf("Enter HR Name\n");
    scanf("%s",H->Name);
    // fflush(stdin);
    // gets(HName);

    printf("Enter HR id \n");
    scanf("%d", &H->id);

    printf("Enter HR salary \n");
    scanf("%d", &H->salary);

    printf("Enter HR Commision \n");
    scanf("%d", &H->commision);

   
}

void display(HR* H)
{
    printf("HR  Name is: %s\n", H->Name);
    printf("HR id is: %d\n", H->id);
    printf("HR  salary  is: %d \n", H->salary);
    printf("HR  Commision  is: %d \n",H->commision);
}
int main()
{

    HR H ,H1 ;
   H1= store(&H);

    display(&H1);
}