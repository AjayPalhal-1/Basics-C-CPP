// 2.
// Create a class Product with members as pid,pname,price and quantity .Add following
// methods:
// e. Constructor (Support both parameterized and parameterless)
// f. Destructor
// g. ShowBook


#include<iostream>
using namespace std;

class Product 
{
    int pid;
    int price;
    string pname;
    int qunatity;

    static int discount ;

    public:

    Product();//DC
    Product(int,int,string,int); //PC
    void showProduct(); 
    void static discountDetail();



};