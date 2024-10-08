int main ()
{
     int Amount ;

     printf(" Have You Insert The Card \n ");
    int CardStatus ;
    scanf("%d",&CardStatus);
    if(CardStatus==1 )
    { int i ; 
      printf(" Entre Your choice  \n   ");
      printf(" For Deposite Money Press   2  \n  ");
      printf(" For Withdraw  Money Press   3 \n  ");
      printf(" For Check  Money Press  4 \n  ");
      printf(" For Exit Press  5   \n ");
      scanf("%d",&i);
      printf(" % d \n\n ", i);
      if(i==2)
       {
          printf(" Entre The Amount \n ");
            scanf("%d",&Amount);

            printf(" Recentlly Credited  Money = %d \n ", Amount);

       }
       else if (i==3)
         {
            printf(" Entre The Amount You want to withdraw  \n ");
            scanf("%d",&Amount);

            printf(" Recentlly Debited  Money = %d \n ", Amount);

         }

           else if (i==4)
         {
            //printf(" Entre The Amount You want to withdraw  \n ");
            scanf("%d",&Amount);

            printf(" Available maoney = %d \n ", Amount);


        }
        else if (i==5)
         {
            printf(" Exiting Byeee   \n ");
            //scanf("%d",&Amount);

            //printf(" Available maoney = %d \n ", Amount);

         }






         else
        {
           printf(" You have to Entre  Card \n");
         }
    }
}