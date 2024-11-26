#include"ticket.h"

Ticket::Ticket(int* st,float f,int c){
    this->stops = st;
    this->fare = f;
    this->chargesPer100m = c;

}
   bool Ticket::setRoute(int,int);
   float Ticket::CalPrice();