


    // 12344321
    // 123**321
    // 12****21
    // 1******1


#include<iostream>

using namespace std;

int main()
{

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i+1;j++)
        {
            cout<<j;
          
            
        }
        if(i==1)
            cout<<"";
            if(i==2)
            cout<<"****";
            if(i==3)
            cout<<"*****";
            if(i==4)
            cout<<"******";
        for(int k=4;k>=1;k--)
        {    int a=4,b=5;
            // if((k==a || k==b )   )
            // {
            //     cout<<"**";
            //     // a+=2;
            //     // b+=2;
            // }



            //  if((k!=1 || k==7 )   )
            // {
            //     cout<<"******";
               
            // }
  
           
            
             cout<<k;
        }
        cout<<endl;
    }
}