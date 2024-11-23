// 3.Take a array from user and store sum of 1st and last index, 2nd and
// secondlast index,3rd and 3rd last index and so on in another array
// eg. Array=1,4,3,5,3,6,4,7,4,7,4,5
// output=6,8,10,9,10,10


#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};

    for(int i=0; i<6;i++)
    {
        arr[i]=arr[i]+arr[5-i];
    }
    for(int i=0; i<3;i++)
    {
        cout<<arr[i]<<" ";
    }

}