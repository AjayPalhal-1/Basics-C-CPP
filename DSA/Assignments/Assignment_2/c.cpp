#include <iostream>
using namespace std;

// 1 
// 1 2 
// 1   3 
// 1     4 
// 1 2 3 4 5

int main() {
    // Upper part of the pattern (Hollow triangle)
    int size =5;
    for (int i = 1; i <=size; i++)
     { 
        
        for (int k = 1; k <= i; k++)
         {
            if(k==1 || k==i||i==size)
            {
               cout <<k<< " ";
            }            
                else{
                    cout<<"  ";
                }

         }
              cout << endl;

    }
}
    
   