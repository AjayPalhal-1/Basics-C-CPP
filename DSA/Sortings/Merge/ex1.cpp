#include<iostream>
using namespace std;

int main()
{
    int size1 =5, size2=5;
    int arr1[size1]={1,2,3,4,5};
    int arr2[size2]={6,7,8,9,10};
    
    int size= size1 + size2;
    int arr3[size]={0};


    for(int i=0 ,j=0 ,k=0; i<size1;i++,j++,k++)
    {
        if(arr1[i]< arr2[j])
        {
            arr3[k]=arr1[i];
            
        }
        else{
        arr3[k]=arr2[j];

        }

    }
     for(int i=0  ;i<size;i++)
    {
        //if(arr1[i]>arr2[j])
        {
          cout << arr3[i]<<' ';
            
        }
    }

}