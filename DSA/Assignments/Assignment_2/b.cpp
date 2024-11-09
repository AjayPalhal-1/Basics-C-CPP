#include <iostream>
using namespace std;

int main() {
    // Upper part of the pattern (Hollow triangle)
    for (int i = 1; i <=5; i++)
     { 
        
        
        for (int k = 1; k <= i; k++)
         {
                cout << "* ";

         }
              cout << endl;

    }
    for (int i = 4; i >=1; i--)
     { 
        
        
        for (int k = 1; k <= i; k++)
         {
                cout << "* ";

         }
              cout << endl;

    }
}
    
   