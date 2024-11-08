#include<iostream>
using namespace std;


int main ()
{ 
    int size =5;
    int arr[size]= {3,1,7,2,9}; // pass = 4 pass // intreation
     
    for(int i=1;i<size;i++)
    {   
      int current= arr[i];
      int j=i-1;
      for(;j>=0;j--)
      {
        if(j<=0 && arr[j]>current)
        {
             arr[j+1]=arr[j];
         }
         else
            break;

      }
         arr[j+1]=current; 
            

    }

    for(int i=0;i<size;i++)
    {
        cout <<arr[i];
        cout<<endl;

     }

      cout<<endl;

}