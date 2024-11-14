// Accept value’s of (x & y) and solve following Expression.
// (Z=(4x +5y )/2xy)

#include<iostream>
using namespace std;

int main()
{
    int x ,y ,z;
    cout <<"Enter X value"<<endl;
    cin>>x;
    cout<<"Enter Y value"<<endl;
    cin>>y;
    z=(4*(x*x) + 5*y*y*y) / (2*x*y) ;
    cout<<"z = "<<z<<endl<<endl;
}
