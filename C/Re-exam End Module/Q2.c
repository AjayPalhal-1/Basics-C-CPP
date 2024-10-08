#include<stdio.h>

int main ()
{

    int start  =1;
    int end =100;
    int j, count =0 ;
    
    printf("Prime No. Between 1 - 100 Are :");
     for(int i=start; i<end; i++)
     {

       
    //     for (int  j = 2; j > i/2; j++)
    //     {
    //         if (i%j == 0 )
 
         count=0;


         for(j=2;j<i;j++ )
        {
            if(i%j==0)                   
            { count ++;
             break;}

       }

       if(count==0)
         printf("  %d ",i);
        
    }
}




