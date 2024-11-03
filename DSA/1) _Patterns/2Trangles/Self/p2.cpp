


    // 12344321
    // 123**321
    // 12****21
    // 1******1


#include<iostream>

using namespace std;

int main()
{
    for(int i=1;i<=4;i++)
    {

     for(int j=1;j<=4-i+1;j++)
     {

        cout<<j;
     }
    //  cout<<endl;
    
    for(int j=4;j>=i+1;j--)
     {
        if(i==2)
        {
            cout<<"**";
        }

        cout<<j;
     }
     cout<<endl;
    }

}