// Problem 2: Array Rotation

// Given an array of integers, rotate the array to the right by k steps, where k is a non-negative integer.
// Input: An array of integers and a value k, for example: array = [1, 2, 3, 4, 5] and k = 2
// Output: The array after rotating, which should be [4, 5, 1, 2, 3].




#include<iostream>
using namespace std;
   void  rotatarray(int * ,int);


int main()
{
    int arr[5]={ 1 ,2,3,4,5};

    rotatarray(arr,5);
}

void rotatarray(int * ptr ,int size )

{
    int k=2;
    for(int i=0; i<size ;i++)
    {

        for(int j=1 ;j<k;j++)
        {
            ptr[i]=ptr[k];
        }


    }

      for(int i=0; i<size ;i++)
    {

        
            cout<< ptr[i]<<"   ";
        

        
    }


}
