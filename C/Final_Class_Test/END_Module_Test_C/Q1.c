#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// Q1 . wap 1!+2!+ ...n!

int main ()
{

int i,j,sum=0,num;
printf("Enter The No. ");
scanf("%d",&num);
printf("Sum Of Num : ");
for ( i=1; i<=num; i++)
{ int fact=1;
    for(j=1;j<=i;j++)
    {
        fact=fact* j;
    }
   // sum= sum +fact;
    // printf("%d",fact);
    sum= sum+fact;

}
printf("%d",sum);


}