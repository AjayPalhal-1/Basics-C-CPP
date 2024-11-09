#include <iostream>
using namespace std;

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
    
   