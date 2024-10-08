#include<stdio.h>

int main ()
{

    int arr1[8] = { 1,2,1,3,2,1,3,2};
    int arr2 [8]={0};

    int j=1, i; 

    for (i=0 ;i<8;i++)
    { 
       // if(arr1[i]== arr1[i+1])
        {
            for(j=i; j<8;j++)
            {
                if(arr1[i]!= arr1[j])
                {  int temp = arr1[i];
                    arr2[j]= temp;
                }
            }
        }
        
        

    }
    printf(" Arr2 = ");
    for(i=0;i<8;i++)
    {
        printf(" %d ",arr2[i]);
    }
}