#include<iostream>
using namespace std;

int main()
{
    int size =5;

    int arr[size]={11,23,45,67,99};
    int target =99;

    for(int i=0; i<size;i++)
    {
        if(arr[i]==target)
        {
            cout<<target<< "  Found At "<<i<<"Index "<<endl;
            return 0;
        }
        
    }

    cout<<"Number Not Found ";

}
