// 2. Accept Bill Amount & calculate 18% GST Amount & final Amount.



#include<iostream>
using namespace std;


int main()
{
    int bill ;
    cout<<"Enter Your Bill Amount :"<<endl;
    cin>>bill;
    cout<<"18% GST Amount : " <<bill*0.18<<endl;
    cout<<"Total Bill After Calculating 18% GST  Is : "<<endl;
    cout<< bill +  bill*0.18<<endl<<endl;



    
}