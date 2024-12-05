#include<iostream>
using namespace std;

// Step 1: Iterate through each element (outer loop).
// Step 2: Find the minimum element in the unsorted portion (inner loop).
// Step 3: Swap the minimum with the current element.



int main()
{
    int size =5;
    int arr[size]={3,5,3,2,1};

    for(int i =0; i<size-1;i++)
    {
        int idx =i;
        int  min = arr[i];
        for(int j=i+1;j<size;j++)
        {
            
            if(arr[j]<min)
            {
                min= arr[j];
                idx=j;                

            }
                
        }
                int temp = arr[i];
                arr[i]= arr[idx];
                arr[idx]= temp;

        
        
    }
    
       for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<"  ";
        }


}