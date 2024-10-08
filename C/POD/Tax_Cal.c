
#include<stdio.h>
void TaxSeven ( int );
int main ()
{

    int income  ;
    printf(" Entre Your Income ");
    scanf("%d",&income );

    if(income <= 500000)
    {
     TaxSeven ( income  );
    }

    else if(income <= 1000000)
    {
    TaxTen ( income );
    }
    else if(income <= 1500000)
    {
     TaxFiftin ( income );
    }
} 

void TaxSeven (int income )
{
    printf(" You Have To Pay 7%% Tax \n");
    int tax = income * 0.07 ;
    int amount =  income -tax;
    printf(" 7 %% Tax  of Your Income (%d) is = %d  \n",income ,tax ) ;
    printf("  Remaining Amount Of Money After Paying 7%% tax is = %d \n\n\n",amount);
    //return 0;

}

void TaxFiftin (int income )
{
    printf(" You Have To Pay 15%% Tax \n");
    int tax = income * 0.15 ;
    int amount =  income -tax;
    printf(" 15 %% Tax  of Your Income (%d) is = %d  \n",income ,tax ) ;
    printf("  Remaining Amount Of Money After Paying 15 %% tax is = %d \n\n\n",amount);
    //return 0;

}


void TaxTen (int income )
{
    printf(" You Have To Pay 10%% Tax \n");
    int tax = income * 0.10 ;
    int amount =  income -tax;
    printf(" 10%% Tax  of Your Income (%d) is = %d  \n",income ,tax ) ;
    printf("  Remaining Amount Of Money After Paying 10%% tax is = %d\n\n \n",amount);
    //return 0;

}