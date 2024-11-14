#include<iostream>
using namespace std;

int main()
{
    int age ;
    cout<<"Enter The Age For Voting  : ";
    cin>>age;

if(age>120 || age<18)
{

    try
    {
        if(age>120  && age<=500)
        {
            string s= "Aap es Dhara se Nahi ho  ";
            throw s ;
        }
        else if(age>500)
        {
            cout<<"Ashwathama Ho Tum";
        }
        else if(age<18)
        {
            string s= "Bacche Ho Tum Abhi ";
            throw s ;
        }
    }
    catch(string s)
    {
        cout<<s;
    }
}
else 
    cout<<"\n Your Eligible To Vote \n\n";
    
}