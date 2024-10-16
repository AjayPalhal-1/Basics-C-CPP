#include<iostream>

using namespace std;

int main()
{
    string s = "AJAY PALHAL";
    // cout<< s[1];
    for(int i=0; s[i]!='\0';i++)
    {
        cout << s[i];
    }

    cout <<endl << "Size of String " << s << "Is  : "<< s.size()<<endl<<endl;
}