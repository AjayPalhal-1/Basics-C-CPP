#include<iostream>
using namespace std;

//                1 2 3 4 5 
//                  1 2 3 4 
//                    1 2 3 
//                      1 2 
//                        1 


int main()
{
     
    for(int i=1;i<=5;i++)
    {   
        int m=1;
        for(int j=1; j<=i;j++)
        {
         cout<<"  ";
         m+=2;

        }

        for(int k=1; k<=6-i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;


        
    }
}