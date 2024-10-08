// Reverse Array
#include <stdio.h>
int main()
{
    int i, size, j;
    int arr[size];
    int arr1[size];

    printf(" Enter The  Array Size :");
    scanf("%d", &size);
    printf(" \nEnter The  Array Elements :");

    for (i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);
        //  printf("%d ", arr[i]);
    }

    for (j = 0, i = size - 1; j < size; j++, i--)
    {

        arr1[j] = arr[i];
        // printf(" j= %d \n ",j);
        // printf("  i= %d ",i);

        // printf("%d ", arr[j]);
    }
    for (i = 0; i < size; i++)
    {

        printf("%d ", arr1[i]);
    }
    return 0;
}