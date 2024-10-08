//Accept two numbers from user and an operator (+,-,/,*,%) based on that
//perform the desired operations.
#include<stdio.h>
int main ()
{


int num1 , num2 , res , choice ;
printf(" Entre Your Number 1  ");


scanf("%d",&num1);

printf(" Entre Your Number 2 \n\n");


scanf("%d",&num2);
printf(" For Addition Press 1  \n\n For Substraction  Press 2  \n \n For Multiplication  Press 3 \n\n"); 
printf(" For Division  Press 4  \n\n  For Mod  Press 5 \n \n"   );

printf(" Entre Your Choice \n\n \n  ");
scanf("%d",&choice);

 
if (choice ==1)
{
    res = num1 + num2 ;
    printf("Addition Of This Two Number = %d \n", res);
}
else if (choice ==2 )
{
    res = num1 - num2;
    printf("Substraction  Of This Two Number =  %d \n", res);
}
else if (choice ==3 )
{
    res = num1 * num2;
    printf("Multiplication  Of This Two Number = %d \n ", res);
}
else if (choice ==4 )
{
    res = num1 /  num2;
    printf("Division  Of This Two Number = %d 10\n ", res);
}
else if (choice ==5 )
{
    res = num1 % num2;
    printf(" Mod  Of This Two Number = ", res);
}

}