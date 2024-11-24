#include"concept.h"
#include <iostream>
using namespace std;
int main()
{
    CQ Q1(5);
    
   int ch ,ele;
   cout<<"\nEnter Your Choice \n1 : Insert \n2 : Delete \n3 : Display \n4 : exit \n";
   cin>>ch;
    do
    {
        switch (ch)
        {

        case 1 :
        cout<<"Enter Your Element \n";
        cin>>ele;
        Q1.Insert(ele);
        break;

        case 2 :
        cout<<"Deleted Element  : \n";
        Q1.Delete(ele);
        break;

        case 3:
        Q1.Display();
        break;

        
      
        }
        
    } while (ch!=4);
    
}