#include<iostream>
using namespace std;



//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * *  


int main()
{ 
    

    for(int i=1;i<=5;i++)
    { 
         
        for(int j=1;j<=5-i;j++)
        {
        //  cout<< ch;
         cout<< "  ";


        }
          for(int j=i;j<=i*2-1;j++)
        {
        //  cout<< ch;
         cout<< "* ";
        //  i=i+2;
        }
        for (int k = 1; k<=i*2-i;k++)
          {
            if(i!=1&&k!=2)
            {
         cout<< "* ";
          }
          }
        cout<<endl;
    }
}