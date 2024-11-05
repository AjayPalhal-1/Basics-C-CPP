#include<iostream>
using namespace std;



//         A 
//       A B C 
//     A B C D E 
//   A B C D E F G 
// A B C D E F G H I  


int main()
{ 
    

    for(int i=1;i<=5;i++)
    { 
         char ch ='A';
        for(int j=1;j<=5-i;j++)
        {
        //  cout<< ch;
         cout<< "  ";


        }
          for(int j=i;j<=i*2-1;j++)
        {
        //  cout<< ch;
         cout<<ch++<< " ";
        //  i=i+2;
        }
         char ch1 =ch;
        for (int k = 1; k<=i*2-i;k++)
          {
            if(i!=1&&k!=2)
            {
         cout<<ch1++<<" ";
          }
          }
        cout<<endl;
    }
}