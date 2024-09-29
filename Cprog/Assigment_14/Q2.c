// 2. Create a structurebook with data members as hrs, min, sec. Accept the values of all
// these members from user and display them. Also perform addition of twobook variables
// and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
// the givenbook into sec.


#include<stdio.h>

typedef struct time 
{
    int hour ;
    int min;
    int sec ;

}time; 



int main ()
{
  time t1 ,t2,t3 ;
}

void Store(time* t1)
{   
   printf("::::: Inputs From User  :::::\n\n");
    printf("Enter Hour  :\n");
    
    scanf("%d",t1->hour);
    printf("Enter Min :\n");
    scanf("%d",&t1->min);
    printf("Enter Sec :\n");    
    scanf("%d",t1->sec);
 
}   

void display(time* t1)
{   
    printf("|\n\n\n ::::: Output :::::\n\n");
    printf("\nHour : %d\n",t1->hour);
    printf("\nMinites : %d\n",t1->min);    
    printf("\nSeconde : %d\n",t1->sec);
    
}   
