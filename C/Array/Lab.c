#include<stdio.h>
int main ()
{
     int i,sum=0;
    int arr [10];
    
    for ( i =0 ; i<10; i++)
  {
     scanf("%d",&arr[i]);
  } 

  
   for (i=9; i>=0; i--)
  { 
    printf("\n %d \n",arr[i]);
  }
     for ( i =0 ; i<10; i++)
   {  
       sum = sum+arr[i];
   }   
     printf(" sum is = %d \n\n\n", sum);
}



