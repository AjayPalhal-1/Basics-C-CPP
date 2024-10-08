#include<stdio.h>
int main ()
{

    int start ,end ,j,i;
    printf("Entre Starting Range  ");
    scanf("%d",&start);
     printf("Entre Ending Range ");
    scanf("%d",&end);
    for (i = start ; i<= end; i++)
    {    
        
        
        for (j=1 ; j<=10 ;j++)
        {
            int mul  ;
            mul = j * i ;
            
           printf(" %d", mul );

        }
         int sqr = i*i;
        //  printf("\n");
        printf(" Sqares = %d \n", sqr );


    }
}