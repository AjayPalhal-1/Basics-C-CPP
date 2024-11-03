#include<iostream>

using namespace std;


// 12344321
// 123**321
// 12****21
// 1******1

int main()
{
    for(int i=1; i<=4; i++)  // Loop for each row
    {
        // Left part: print decreasing numbers
        for(int j=1; j<=5-i; j++)  
        {
            cout << j;
        }

        // Middle part: print stars
        for(int j=1; j<=(i-1)*2; j++)  
        {
            cout << "*";
        }

        // Right part: print decreasing numbers
        for(int j=5-i; j>=1; j--)  
        {
            cout << j;
        }
        
        cout << endl;  // New line after each row
    }
    return 0;
}
