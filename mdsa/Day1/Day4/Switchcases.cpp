#include<iostream>
using namespace std;

int main()
{

    int day ;
    cout<<"Enter the Day no. ";
    cin>> day;


    switch(day)
    {
        case 1 :
        cout<< "Today Is Monday"<< endl;
        break;

        case 2 :
        cout<< "Today Is Tuseday"<< endl;
        break;

        case 3 :
        cout<< "Today Is Wensday"<< endl;
        break;


        case 4 :
        cout<< "Today Is Thursday"<< endl;
        break;

        case 5 :
        cout<< "Today Is Friday"<< endl;
        break;

        case 6 :
        cout<< "Today Is Saturday"<< endl;
        break;

        case 7 :
        cout<< "Today Is Sunday"<< endl;
        break;
        default :
        cout<< "Invalid Choice ";

        


    }
}