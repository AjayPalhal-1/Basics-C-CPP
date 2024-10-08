#include <stdio.h>

int main()
{

   int start, stop, i, j, count;
   printf(" Enter The  Starting Range : \n");
   scanf("%d", &start);
   printf(" Enter The  Ending  Range : \n");
   scanf("%d", &stop);

   for (i = start; i <= stop; i++)
   {
      printf(" Factor Of %d is: ", i);
      for (j = 1; j <= i; j++)
      {
         if (i % j == 0)
         {
            // count = j;
            //  printf(" i=%d , j  = %d",i,j);
            printf("%d ", j);
         }
      }
      printf(" \n");
   }
}