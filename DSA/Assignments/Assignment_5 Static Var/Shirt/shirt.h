
#include<bits/stdc++.h>
using namespace std;

class Shirt{
private:
    int sid;
    double price;
    string sname,sType,sSize;
    static int prodCount;

public:
    Shirt();
    Shirt(int,string,string,string,double);
    void displayShirt();
    static double calculateFinalPrice(const string& size,double basePrice);
    static int getProdCount(){return prodCount;}
};