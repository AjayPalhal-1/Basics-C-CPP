#include<iostream>
using namespace std;


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1; j<=10-i; j++)
            cout<<" ";

        for(int k=1; k<=i; k++){
            if(k==1 || k==i){
                cout<<"1 ";
             }
                else{
                cout<<i-1<<" ";
             }
        
    }

    cout<<endl;
}
}