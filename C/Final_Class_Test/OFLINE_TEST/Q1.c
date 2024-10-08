#include<stdio.h>

int main()
{
    // int size ;
    // printf("Enter the Size\n");
    // scanf("%d",&size);
     int i;
    int arr[5]= {1,2,3,4,5,};
    int brr[5]={7,1,2,8,4,};
    
 printf("Repeated No . : ");
    for( i=0 ;i<5;i++)
    {
    
        if(arr[i]==brr[i])
        {
        // printf("Repeated No . : %d",i);
        }
                printf("%d",arr[i]);

    }
          //  printf("Repeated No . : %d",i);


}