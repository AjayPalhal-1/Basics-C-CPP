#include<iostream>
using namespace std;



//         1 
//         1 3 
//         1 3 5 
//         1 3 5 7 
//         1 3 5 7 9 

int main()
{   
    for(int i = 1; i<=5; i++)
    {  
         int k=1;

        for(int j=1 ; j<=i;j++)
        {   
        cout<< k<<" ";
        k+=2;
        }
        

        cout<<endl;
    }
}