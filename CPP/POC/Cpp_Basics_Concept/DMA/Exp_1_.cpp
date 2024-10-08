#include<stdio.h>
#include<iostream>
int main ()
{     int size =5;
    int * ptr = new int[size] ;
        printf("ptr Size : %lu \n",*ptr*sizeof(ptr));

    printf("Enter Array Element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Array Element Are :");
    for(int i=0;i<size;i++)
    {
        printf("%d",ptr[i]);
    }
    delete[]ptr;

     printf("\n\nAfter Delete Array Element Are :\n");
    for(int i=0;i<size;i++)
    {
        printf("\n%d",ptr[i]);
    }


    return 1;

}