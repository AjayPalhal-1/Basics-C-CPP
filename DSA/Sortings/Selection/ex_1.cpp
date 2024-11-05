#include<iostream>
using namespace std;


int main ()
{ 
    int size =5;
    int arr[size]= {3,1,7,2,9}; // 
     
    for(int i=1;i<5;i++)
    {   
      int min= arr[i];
      for(int j=i+1;j<size;j++)
      {
        if(min > arr[j])
        {
            int idx = i;
             arr[j]=arr[i];
            arr[i]=min;
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