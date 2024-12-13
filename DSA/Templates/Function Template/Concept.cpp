#include<iostream>

using namespace std;

template <class T>

T add (T a , T b)
{
    return a+b;
}

int main()
{
    cout<<add(10,20)<<"\n";
    cout<<add(10.5, 20.0)<<"\n";
    // cout<<add(10.5, 20)<<"\n";



}