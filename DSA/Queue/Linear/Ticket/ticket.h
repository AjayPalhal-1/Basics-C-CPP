#include<iostream>
using namespace std;

class Ticket
{
    int* stops;
    float fare;
    int chargesPer100m;
    int src;
    int dest;

    public:

   Ticket (int*,float,int);
   bool setRoute(int,int);
   float CalPrice();


};
