#include<stdio.h>

int main ()
{
int start , end , i,evn,odd;

printf(" Entre the Starting  Range\n " );
scanf("%d", &start);
printf(" Entre the Ending Range \n" );
scanf("%d", &end);
printf(" start num = %d\n",start);
printf(" end num = %d\n",end);


for (i = start ; i<= end ;i++)
{
    if (i%2==0)
    {
     evn = i ; 
     
      printf("Even No Are %d \n",evn);

    }
}
    //printf("Even No Are %d ",evn);
    for (i = start ; i<= end ;i++)
{
     if (i%2!=0)
    {
        odd= i;
             printf("Odd No Are %d \n",odd);

    }
         //   printf("Odd No Are %d ",odd);

}
   

}