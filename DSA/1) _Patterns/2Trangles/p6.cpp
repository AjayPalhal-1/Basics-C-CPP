#include<iostream>
using namespace std;

//        1 * * * * * 
//        1 3 * * * * 
//        1 3 5 * * * 
//        1 3 5 7 * * 
//        1 3 5 7 9 * 


int main()
{
     
    for(int i=1;i<=5;i++)
    {   
        int m=1;
        for(int j=1; j<=i;j++)
        {
         cout<<m<<" ";
         m+=2;

        }

        for(int k=1; k<=6-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;


        
    }
}