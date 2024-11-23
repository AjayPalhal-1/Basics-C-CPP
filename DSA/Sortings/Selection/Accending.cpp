#include<iostream>
using namespace std;


int main()
{
    int size =5;
    int arr[size]={3,5,3,2,1};

    for(int i =0; i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;

            }
        }

        
    }
    
    for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<"  ";
        }


}