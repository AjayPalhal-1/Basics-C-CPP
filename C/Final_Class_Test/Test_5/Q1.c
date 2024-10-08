#include<stdio.h>{}

int main()
{
     int costP, DiscountP, SellingPrice ;
     printf("Enter the Cost Price ");
     scanf("%d",&costP);

     if(costP<= 500 )
     {   printf(" Your Eligible For 5 %% Discount \n");
        int dis  = costP * 0.05 ;
         SellingPrice = costP -dis;
        printf("%d Is Our Selling Price After Applying Discount 0f %d \n",SellingPrice , dis );
         return 0 ;
     }
      if(costP<= 5000 )
     {   printf(" Your Eligible For 10 %% Discount ");
        int dis  = costP * 0.10 ;
        SellingPrice = costP -dis;
        printf("%d Is Ou Selling Price After Applying Discount 0f %d  \n",SellingPrice , dis  );
        return 0  ;
     }
      if(costP<= 10000 )
     {   printf(" Your Eligible For 20 %% Discount ");
        int dis  = costP * 0.20 ;
        SellingPrice = costP -dis;
        printf("%d Is Ou Selling Price After Applying Discount of %d \n",SellingPrice , dis );
        return 0;
     }

}