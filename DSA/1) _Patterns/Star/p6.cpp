
#include<iostream>
using namespace std;


//      1 2 3 4 5   
//      2 3 4 5 
//      3 4 5
//      4 5 
//      5

int main()

{

    for(int i=1;i<=5;i++)
    {
     for(int j=i;j<=i;j++)
    {
         cout<<i<<" ";
    }
        cout<<endl;

    }
}