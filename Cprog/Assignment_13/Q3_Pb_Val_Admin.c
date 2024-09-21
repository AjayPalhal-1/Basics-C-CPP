#include<stdio.h>

// 3. Admin (id, name, salary, allowance)


typedef struct Admin 
{
    char name[50];
    double salary ;
        double allowance ;

} admin;


admin storeS()
{
    admin temp;
    printf("Enter admin name\n");
    // scanf("%s",s[i].name);
    fflush(stdin);
    gets(temp.name);

    printf("Enter admin Allowance\n");
    scanf("%lf", &temp.allowance);

    printf("Enter admin salary\n");
    scanf("%lf", &temp.salary);

    return temp;
}

void display(admin a)
{
    printf("admin  name is: %s\n", a.name);
    printf("admin  allowance is: %\n", a.allowance);
    printf("admin  salary  is: %lf \n", a.salary);
}
int main()
{

    admin a;
    a= storeS();

    display(a);
}