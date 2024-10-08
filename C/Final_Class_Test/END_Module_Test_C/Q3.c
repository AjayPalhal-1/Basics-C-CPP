#include <stdio.h>

typedef struct mobile
{
    int mid;
    char name[20];
    int price;
    char brand[20];

} mobile;

mobile add(mobile *m, int Mcount)
{
    for (int i = 0; i < Mcount; i++)
    {
        printf("Enter Mob id\n");
        scanf("%d",&m[i].mid);
        printf("Enter Mob brand\n");
           fflush(stdin);
        gets(m[i].brand);
        printf("Enter Mob Price\n");
        scanf("%d",&m[i].price);
        printf("Enter Mob Name\n");
           fflush(stdin);
        gets(m[i].name);
    }
}

mobile disp(mobile *m, int Mcount1)
{
    for (int i = 0; i < Mcount1; i++)
    {
        printf("Mob id :%d\n", m[i].mid);
        fflush(stdin);
        printf("Mob Brand :%s\n",m[i].brand);
        printf("Mob Price :%d\n", m[i].price);
           fflush(stdin);
        printf("Mob Name:%s\n", m[i].name);
    }
}
int menu()
{
    printf(" Enter 1 For Add Details\n");
    printf(" Enter 2 For Display  Details\n");
    int choice;
    scanf("%d",&choice);
    return choice;
}

int main()
{
    mobile m[2];
    if (menu() == 1)
    {

        int Mcount;
        printf("Enter No of Mob You want add");
        scanf("%d",&Mcount);

        add(m,Mcount);
    }
    else if(menu==2)
    {
        int Mcount1;
        printf("Enter No of Mob You want show");
        disp(m,&Mcount1);

    }
}