#include<stdio.h>

int main ()
{

    int arr1[5] = { 1,2,0,3,0};
    int arr2 [5]={0};

    int i , j,count ;
    for(i=0;i<5;i++)
    {

      if(arr2[i]==0)
  {
        count =1;
        for(j=i+1;j<5;j++)
        {
            if(arr1[i]==arr1[j])
            {
            arr2[j]=1;
            count++;
            }
        }
          if(count>1)
          {

            printf(" %d ",arr1[i]);
        
          }
          
         
     }  

    }
      
    
    }