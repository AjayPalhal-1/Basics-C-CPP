#include<stdio.h>
void Deposite(int );
 //void Wid(int );

int main ()
{

   int amount ;
   printf(" Enter Some Amount .");
   scanf("%d",&amount);
    printf(" Enter 1 For Deposite \n");
     printf(" Enter 2 For Withdraw \n");
    int choice ;
    scanf("%d",&choice);
    if(choice==1)
    {
    Deposite(amount);
    }
    // else if (choice == 2)
    // Wid(amount);   
}

void Deposite (int amount )
{
    printf(" You Have Deposited %d INR ",amount);
        printf(" \n You Are Total amount is %d  ",amount);

}

// void  Wid();
// {
//     printf(" Enter amount for Wid  \n ");
//     if(amount );
// }