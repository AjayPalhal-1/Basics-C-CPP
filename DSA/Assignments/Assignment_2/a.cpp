#include<iostream>
using namespace std;






int main()
{
    for(int i=1;i<=6;i++)
    { 
        for(int j=1;j<=6-i;j++)
        {
            cout<<"  ";

        }
        for(int k=1;k<=i;k++)
        {
            if(k==i||k==1)
            {
            cout<<"*   ";
            }
            else{
                cout<<"    ";
            }

        }
         cout<<endl;    
    }
       
        for(int i=1;i<=4;i++)
        {

        for(int j=1;j<=4;j++)
        {
            cout<<"  ";

        }
        for(int k=1;k<=5-i;k++)
        {
            if(k==i||k==1)
            {
            cout<<"    ";
            }
            else{
                cout<<"*   ";
            }

        }
                cout<<endl;

        }
        
    
}