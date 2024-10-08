#include<stdio.h>

int main ()
{
int i , sum=0 , rem  ,  dev,num;
printf("Enter Th1e No \n");
scanf("%d",&num) ;
int orgnum = num;
for(;num!=0;num = num/10) // while pan use kri shkto jar 

{
    rem = num% 10;
     sum = sum + rem ;
    

   // printf(" Sum = %d",sum);
}
    printf(" Sum = %d\n",sum);
            printf(" num = %d\n",num);
    if(orgnum%sum==0)
    {
        printf(" NO %d is Harshad No \n",orgnum);
        
    }
    else 
     printf(" NO %d is Not  Harshad No ",orgnum);


}