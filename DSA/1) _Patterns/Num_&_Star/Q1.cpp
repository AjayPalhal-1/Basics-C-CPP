#include<iostream>
using namespace std;


// 1 2 3 4 5 
// * * * * * 
// 1 2 3 4 5 
// * * * * * 
// 1 2 3 4 5

int main()
{

    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i%2==0)
            {
             cout<<"* ";
            }
            else 
            {
               cout <<j << " ";
            }

        }


        cout<<endl;
    }
}