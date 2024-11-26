#include<iostream>
using namespace std;

#include<string.h>

class Product
 {

    int id;
    char name[10];
    int price ;
    int quantity ;

    public:

    Product(int id , char * name, int price , int qnt )
    {
        this->id=id;
        strcpy(this->name,name);
        this->price= price;
        this->quantity=qnt;

    }

    char *  getName()
    {
        return this->name;
    }
    int getId()
    {
        return this->id;
    }

    int getPrice ()
    {
        return this->price;
    }
    int getQuantity  ()
    {
        return this->quantity;
    }

   virtual double FinalPrice()=0;
    



 virtual   void Display()
    {

        cout<<endl<<"Product Name      : "<<this->getName()<<endl;
        cout<<endl<<"Product Id        : "<<this->getId()<<endl;
        cout<<endl<<"Product Price     : "<<this->getPrice()<<endl;
        cout<<endl<<"Product Qunatity  : "<<this->getQuantity()<<endl;

        
    }
};

class Electronic: public Product
{
    int warranty ;
    char brand[10];

    public:

    Electronic( int id , char * name, int price , int qnt , char * brnd , int warranty):Product (id, name, price ,qnt)
    {
       strcpy(this->brand,brnd);
       this->warranty= warranty;

    }

    int getWarranty()
    {
       return this->warranty;
    }
    char * getBrand()
    {
         return this->brand;
    }

    void Display()
    {
        cout<<endl<<":::    Electronic Product details :::"<<endl;
        Product::Display();
        cout<<endl<<"Product Brand      : "<<this->getBrand()<<endl;
        cout<<endl<<"Product Warranty   : "<<this->getWarranty()<<"Years"<<endl;
        cout<<endl<<"Final Price After 10%% Discount "<<FinalPrice()<<endl;

    }

       double   FinalPrice()
       {
         return this->getPrice()-this->getPrice() * 0.10 ;


       }



};



class Grocerary: public Product
{
    char ExpDate[10] ;
    int  weight;

    public:

    Grocerary( int id , char * name, int price , int qnt , char*  expdate , int weight ):Product (id, name, price, qnt)
    {
        this->weight= weight;
        strcpy(this->ExpDate,expdate);

    }

    char * getExpDate()
    {
       return this->ExpDate;
    }

    int  getweight()
    {
        return this->weight;
    }
    void Display()
    {
         cout<<endl<<":::    Grocerary  Product details :::"<<endl;
        Product::Display();        
        cout<<endl<<"Product Expaiary Date   : "<<this->getExpDate()<<endl;
        cout<<endl<<"Product Weight          : "<<this->getweight()<<"Gram"<<endl;
        cout<<endl<<"Final Price After 5%% Discount "<<FinalPrice()<<endl;

    }

       double   FinalPrice()
       {
         return this->getPrice()-this->getPrice() * 0.05 ;


       }


};



class Clothing: public Product
{
    char material[10] ;
    char   size[10];

    public:

    Clothing( int id , char * name, int price , int qnt , char*  mtrl , char * size ):Product (id, name, price, qnt)
    {
        strcpy(this->size, size);
        strcpy(this->material,mtrl);

    }

    char * getMaterial()
    {   
       return this->material;
    }

    char *   getSize()
    {
        return this->size;
    }
    void Display()
    {
         cout<<endl<<":::    Clothing  Product details :::"<<endl;
        Product::Display();
        
        cout<<endl<<"Product Material      : "<<this->getMaterial()<<endl;
        cout<<endl<<"Product size          : "<<this->getSize()<<endl;
        cout<<endl<<"Final Price After 20%% Discount "<<FinalPrice()<<endl;

    }

       double   FinalPrice()
       {
         return this->getPrice()-this->getPrice() * 0.20 ;


       }


};



int main()
{
    Product* ptr[10];
    int idx=0;


    // Electronic e1(103, "Laptop", 1000 , 6 , "Hp_Probook", 2);
    // e1.eleDisplay();

    // Grocerary g1(104, "Colgate", 1000 , 5, "12 Dec 2024", 500);
    // g1.GrcDisplay();

    // Clothing c1(108, "Hoddie" , 1000, 5 , "Cotton" , "Medium");
    // c1.ClothDisplay();

    ptr[idx++]= new Electronic (103, "Laptop", 1000 , 6 , "Hp_Probook", 2);
    ptr[idx++]= new Grocerary (104, "Colgate", 1000 , 5, "12 Dec 2024", 500);
    ptr[idx++]= new Clothing (108, "Hoddie" , 1000, 5 , "Cotton" , "Medium");



    

    int ch;
    do {
        cout<<"\n 1 : For Display \n 2 : For Add Product\n3 : Final Price \n4 : For Remove  \n5 : For Exit\n";
        cin >> ch;

        switch (ch) {
			case 1: 
    cout << "\nDisplaying All ptr:\n";
    for (int i = 0; i < idx; i++) 
    {       
        
        ptr[i]->Display();
        cout << "\n\n";
    }
    break;


        case 2: { 
            int chh;
            cout << "\nSelect Product c (  1  : Electronic  2 : Clothing  3 : Grocerary  ) ";
            cin >> chh;

            int id, quantity;
            char name[50];
            double price;

            cout << "\nEnter Product ID: ";
            cin >> id;
            cout << "Enter Product Name: ";
            cin >> name;
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter Quantity: ";
            cin >> quantity;

            if (chh == 1) { 
                int warranty;
                char brand[50];
                cout << "Enter Warranty Period (in months): ";
                cin >> warranty;
                cout << "Enter Brand: ";
                cin >> brand;
                ptr[idx++] = new Electronic(id ,  name,  price ,  quantity ,  brand ,  warranty);
            } else if (chh == 2) { 
                char size[5], material[10];
                cout << "Enter Size: ";
                cin >> size;
                cout << "Enter Material: ";
                cin >> material;
                ptr[idx++] = new Clothing(id, name, price, quantity,  material, size);
            } else if (chh == 3) {
                char expDate[10];
                float weight;
                cout << "Enter Expiration Date (YYYY-MM-DD): ";
                cin >> expDate;
                cout << "Enter Weight (kg): ";
                cin >> weight;
                ptr[idx++] = new Grocerary(id, name, price, quantity, expDate, weight);
            } else {
                cout << "Invalid Product \n";
            }
        } break;

        case 3: 
            cout << "\nFinal Prices After Discounts:\n";
            for (int i = 0; i < idx; i++) {
                cout << "\nProduct ID: " << i + 1 << "\n";
                ptr[i]->Display();
                cout << "\n";
            }
            break;

            case 4: { 
            int rmvid;
            cout << "\nEnter Product ID to Remove: ";
            cin >> rmvid;

            for (int i = 0; i < idx; i++) 
            {
                if (ptr[i]->getId() == rmvid)
                 {
                    delete ptr[i]; 
                    for (int j = i; j < idx - 1; j++) {
                        ptr[j] = ptr[j + 1]; 
                    }
                    idx--; 
                    
                    cout << "Product Removed Successfully!\n";
                    break;
                }
            }
            
        } 
            

            break;

        
        case 5:
            cout << "Exiting...\n";
            break;

        
        }
    } while (ch != 5
    );



    
   

}


