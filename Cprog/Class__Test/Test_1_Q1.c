// convert HH , MM , Sec In Total Sec 
#include<stdio.h>
int main ()
{

    int HH , MM, Sec , TotalSec;
    printf(" Entre The Time In Hour \n  ");
    scanf("%d",&HH);
    printf(" Entre The Time In Minit \n  ");

    scanf("%d",&MM);
    printf(" Entre The Time In   Sec\n  ");

    scanf("%d",&Sec);


    printf(" Hour = %d\n ",HH );
    printf(" Min = %d \n",MM);

    printf(" Sec= %d \n",Sec);


    TotalSec = (HH * 3600)+ (MM*60) + Sec;
    printf("  Total Time In Seconde is  = %d ",TotalSec );

}