#include<iostream>
using namespace std;

int main()
{
    int myId=108;
    int mypass = 123;
    // string mypass = "A10";
    int id ,pass;
    // string pass;
    cout<<"Enter Id :";
    cin>>id;
    cout<<"Enter Password : ";
    cin>>pass;

    try
    {
        if(myId!=id)
        {
            throw id;
        }
        else if(pass != mypass)
        {
            throw pass;
        }
    }
    catch(int a)
    {
        cout<<"ID Is Invalid ";
    }

    catch(double  a )
    {
        cout<<"Pass Is Invalid ";
    }
    
}