#include<stdio.h>

// 3. Admin (id, name, salary, allowance)


typedef struct Admin 
{
    char name[50];
    int  sallary ;
    int  allowance ;

} admin;

 void store (admin * a )
 {
  
    {
    printf("Enter admin  Name\n");
    scanf("%s",a->name);
   

    printf("Enter admin Sallary \n");
    scanf("%d",&a->sallary);
   

    printf("Enter admin allowance \n");
    scanf("%d",&a->allowance);  
    }  
    

  }

  void  display ( admin * a )
  {
    {
     printf("admin Name is: %s\n",a->name);
     printf("admin Sallary is: %d\n",a->sallary);
     printf("admin allowance  is: %d \n\n\n",a->allowance);
    }
    

    // printf("Sizze of admin array s1 = %d",sizeof(admin));
}
int main()
{

    admin a1;
    store(&a1);

    display(&a1);
}