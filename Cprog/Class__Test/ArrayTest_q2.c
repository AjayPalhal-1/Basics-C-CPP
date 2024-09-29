#include<stdio.h>
int main ()
{

    printf(" Entre Range the no. \n");

    int start , end , i ,sum =0;
    printf(" Enter the start no.\n");
    scanf("%d",&start);
    printf(" Enter the end  no.\n");
    scanf("%d",&end);

     for (i=start;i<=end;i++)
     {   if(i%2!=0)
        sum = sum + i;

     }
     printf(" SUM = %d",sum);
}