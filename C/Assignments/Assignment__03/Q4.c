//Q 4 .  Check number is prime or not.
#include<stdio.h>
int main()
{
    int num=90, i=1 , count=0 ;
    printf(" Enter The No. You want to check i.e. prime or not \n");
    scanf("%d",&num);
    //printf("%d hiii\n",num);
    while(i<= num)
    {
        if(num%2==0)
        {
            count ++;

        }
        i++;
    }
        if (count == 0)
    {
        printf(" Given No. i.e. %d is prime Number\n\n", num);
    }
    else 
            printf(" Given No. i.e. %d is Not  prime Number\n\n", num);

    return 0;


}







