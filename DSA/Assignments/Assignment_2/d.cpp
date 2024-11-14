#include <iostream>
using namespace std;

int main() {
    int size =5;
    for (int i = 1; i <=size; i++)
     { 
        
        for (int k = 1; k <= 6-i; k++)
         { 
             cout << " "; 

         }
         for(int j = 1 ;j<=i;j++)
         {
            cout<<i<<" ";
         }
         cout << endl;

    }
}
    
   