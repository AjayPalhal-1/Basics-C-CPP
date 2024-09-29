#include <stdio.h>

int main() {
    int start, stop, i, sum, rem, qnt, queb;

    printf("Enter the Start No.\n");
    scanf("%d", &start);
    printf("Enter the Stop No.\n");
    scanf("%d", &stop);

    // int  org = start;

    for(i = start; i <= stop; i++)
    {
        int j ;
        sum = 0;
      for (j= i; j >0; j= j/10)
      {       
        rem = j % 10;
        // qnt = i / 10;
        // queb = rem * rem * rem;
        sum = sum + (rem*rem*rem);
      }
    //   printf("Exit val of j = %d",j);
      if (sum==i)
      {
        printf("%d is Armstrong \n",i);
      }          
    }
    // printf("%d is exit val of I ",i);

    

    // printf("Rem %d\n", rem);
    // printf("Queb %d\n", queb);
    // printf("sum %d\n", sum);
    // //printf("   i = %d ",i);

    
    return 0; // Add a return statement to indicate successful execution
}