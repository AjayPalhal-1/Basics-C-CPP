#include<iostream>
using namespace std ;

int main()
{

    string fruit []= { "Apple" , "Banana" };
    string drink []= {"Water " , "Juice"};
    string dessert[]= {"Ice Cream" , "Cake "};


    for(int i=0 ; i<2;i++)
    {
         for(int j=0 ; j<2;j++)
        {
             for(int k =0 ; k<2;k++)
             {
                cout<<" "<<fruit[i]<<" "<<drink[j]<<" " << dessert[k]<<endl;
        

             }
        

        }


    }
}