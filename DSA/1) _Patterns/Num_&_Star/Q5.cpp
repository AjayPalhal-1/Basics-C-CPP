#include<iostream>
using namespace std;

int main ()
{

    for(int i=1;i<=5;i++)
    {
        int k=i;

        for(int j=1;j<=5;j++)
        {

            cout <<k++;
        }
        cout<<endl;
    }
}