#include<iostream>
using namespace std;


int main()
{
    int a = 10;
    int b= 50;
    cout <<"No Before  Swap :"<<endl<<a<<endl<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;

    cout <<"No After Swap :"<<endl<<a<<endl<<b<<endl<<endl;;


}
