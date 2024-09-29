#include<stdio.h>

int main ()
{
int i ;
    int arr1 [5];
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
         int arr2[5] = {scanf("%d",&arr1[i])};
    }
   
     for (i=0;i<4;i++)
    {
        printf("\n Output  %d\n\n",arr2[i]);

    }
    
}