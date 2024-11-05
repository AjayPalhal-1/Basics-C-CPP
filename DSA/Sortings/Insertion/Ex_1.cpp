#include<iostream>
using namespace std;


int main ()
{ 
    int size =5;
    int arr[size]= {3,1,7,2,9}; // pass = 4 pass // intreation
     
    for(int i=1;i<5;i++)
    {   
      int min= arr[i];
      int j=i-1;
      for(;j>=0;j--)
      {
        if(arr[j]>min)
        {
             arr[j+1]=arr[j];
         }
         else
            break;

      }
      arr[j+1]=min; 
            

    }

    for(int i=0;i<size;i++)
    {
        cout <<arr[i];
        cout<<endl;

    }
    cout<<endl;

}