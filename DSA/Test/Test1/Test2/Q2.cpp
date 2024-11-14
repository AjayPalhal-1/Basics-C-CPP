#include <iostream>
using namespace std;

int main()
{
    int size = 5;

    int arr[size] = {5, 2, 1, 3, 4};

     int min;
    for (int i = 1; i < size; i++)
    {
        for(int k=i+1;k<size ;k++)
        {
              min = arr[k];
        
        
        if (min < arr[i])
        {
        //    int temp = arr[i];
        //    arr[i] = min;
        //    min = temp;   

             int idx = i;
             arr[k]=arr[i];
            arr[i]=min;
        }
    
        }
       
    }
    

    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
}