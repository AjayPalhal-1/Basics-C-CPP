#include<iostream>
using namespace std;

int main()
{

    for (int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(i==1||i==7||j==1 ||j==7 || i==2 ||i==6 || j==2|| j==6)
            {
             cout<<"4"<<" ";
              cout<<"3"<<" ";
            }
            else 
            {
               cout <<" "<<" ";
            }

        //     for(int j=1;j<=6;j++)
        // {
        //     if(i==2||i==6||j==2 ||j==6)
        //     {
        //      cout<<"3 ";
        //     }
           
        // }

             


            
            

        }
        


        cout<<endl;
    }
}