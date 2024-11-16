#include"product.h"



   Product :: Product()
    {
        this->pid=0;
        this->pname="Not Given";
        this->price=0;
        this->qunatity=0;

    }//DC
   Product :: Product(int pid,int price ,string pname ,int qnt)
    {
        this->pid=pid;
        this->pname=pname;
        this->price=price;
        this->qunatity= qnt ;
    }
    void Product :: showProduct()
    {
        cout<<"Product  Id     : "<<this->pid<<endl;
        cout<<"Product Name    :"<<this->pname<<endl;
        cout<<"Product Price   :"<<this->price<<endl;
        cout<<"Product Quntity : "<<this->qunatity<<endl<<endl;
        cout<<"Product Discount:" <<discount<<endl<<endl;

    } 

    int Product::discount=15;


    void Product:: discountDetail()
    {
        cout<<"Discount Applied Of Product : "<<discount;
    }