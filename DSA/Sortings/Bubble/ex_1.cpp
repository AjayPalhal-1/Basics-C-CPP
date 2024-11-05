#include<iostream>
using namespace std;


int main ()
{ 
    int size =5;
    int arr[size]= {3,1,7,2,9}; // 

    for(int i=1;i<5;i++)
    {
      for(int j=0;j<size-i;j++)
      {
        if(arr[j]>arr[j+1])
        {
            // arr[j]=arr[i];
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;
         }
      }       

    }

    for(int i=0;i<size;i++)
    {
        cout <<arr[i];
        cout<<endl;

    }
    cout<<endl;

}