// 1. Replace values in array as follows.
// Negative value will be positive and positive will be negative
// eg.Array= -1, 3, 6, 7,-6,3,76,2,-34
// output=1,-3,-6,-7,6,-3,-76,-2,34


#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int arr[size]={-1, 3, 6, 7,-6,3,76,2,-34,-10};

    int num ;
    for (int i=0; i<size; i++)
    {
        if(arr[i]<0 )
        {
            // arr[i]=(arr[i]+arr[i]);
            num=arr[i];
            arr[i]= (num-(arr[i])+(-num) );
        }
        else
        {
            // num=arr[i];
            arr[i]= arr[i] - (arr[i] * 2 ) ;
        }
    }
      for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}
