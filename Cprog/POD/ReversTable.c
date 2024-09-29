#include<stdio.h>
int main ()

{

    int num ,mul ;
    printf(" Entre the no. \n");
    scanf("%d",&num);
    
   int  i = 10;
   for(i=10 ; i>=1 ; i--)
   {
   mul = i * num  ;
   
      printf(" %d  *  %d = %d \n", num, i , mul);
   }

    printf("i = %d",i);

}