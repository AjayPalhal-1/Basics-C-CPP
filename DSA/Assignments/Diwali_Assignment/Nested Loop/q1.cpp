// 1. Find all Prime Number’s Between 3 to 100.




#include<iostream>
using namespace std;

int main()
{
    int start= 3;
    int end= 100;
    
     cout<<"Prime no. Are : ";

    for(int i = start  ; i < end ; i++)
    {
       int count =1;
       for(int j = 2; j < i ; j++)
       {
        if(i%j==0)
        {
          count=0;
          break;            // start ++;

        }  
        
    } 

        if(count)
        {
           cout<<i<<" ";

        }
 }

}
