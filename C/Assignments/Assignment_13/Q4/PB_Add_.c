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

 HR  store(HR* H,int s)
{
    for(int i=0; i<s;i++)
    {
        
    printf("Enter HR Name\n");
    scanf("%s",H[i].Name);
    // fflush(stdin);
    // gets(HName);

    printf("Enter HR id \n");
    scanf("%d",&H[i].id);

    printf("Enter HR salary \n");
    scanf("%d",&H[i].salary);

    printf("Enter HR Commision \n");
    scanf("%d",&H[i].commision);

    }

   
}

void display(HR* H,int s)
{ 
    for(int i=0;i<s;i++)
    {
        
    printf("HR  Name is: %s\n",H[i].Name);
    printf("HR id is: %d\n", H[i].id);
    printf("HR  salary  is: %d \n", H[i].salary);
    printf("HR  Commision  is: %d \n",H[i].commision);
    }
}
int main()
{
    int size=2;
    HR H[size]  ;
    store(H,size);

    display(H,size);
}