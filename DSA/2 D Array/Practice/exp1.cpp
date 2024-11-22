#include<iostream>
using namespace std;

int main()
{

      int arr[3][3];
      cout<<"Enter 2 D Array : \n";

    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }   
    
    cout<<"::::      3 * 3 Array      ::::   \n\n";
     for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }


          cout<<"\n\n";

}