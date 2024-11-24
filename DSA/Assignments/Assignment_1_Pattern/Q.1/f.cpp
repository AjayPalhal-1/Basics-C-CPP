#include<iostream>
using namespace std;



//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9   


int main()
{ 
    

    for(int i=1;i<=5;i++)
    { 
         int m=1;
        for(int j=1;j<=5-i;j++)
        {
        //  cout<< ch;
         cout<< "  ";


        }
          for(int j=i;j<=i*2-1;j++)
        {
        //  cout<< ch;
         cout<<m++<< " ";
        //  i=i+2;
        }
        int n=m;
        for (int k = 1; k<=i*2-i;k++)
          {
            if(i!=1&&k!=2)
            {
         cout<<n++<<" ";
          }
          }
        cout<<endl;
    }
}