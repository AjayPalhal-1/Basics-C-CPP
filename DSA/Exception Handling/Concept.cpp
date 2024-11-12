#include<iostream>
using namespace std;

int main()
{

    try
    { 

        try
        {
            string S ="String"; 
            throw S;
        }
        catch(string s)
        {
            cout<<endl<<s<<" Is Thrwoed ";

        }

        throw 12;

        
    }
    
    catch(int a )
    {
        cout<< endl<<a<<" Is Throwed "<<endl;
    }
    
}