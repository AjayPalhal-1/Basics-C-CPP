#include<iostream>
using namespace std;

#include<string.h>

class Product {
    int id;
    char name[10];
    int price;
    int quantity;

    public:
    Product() : id(0), price(0), quantity(0) {
        strcpy(name, "");
    }

    Product(int id, char* name, int price, int qnt) {
        this->id = id;
        strcpy(this->name, name);
        this->price = price;
        this->quantity = qnt;
    }

    void setProduct(int id, char* name, int price, int qnt) {
        this->id = id;
        strcpy(this->name, name);
        this->price = price;
        this->quantity = qnt;
    }

    char* getName() {
        return this->name;
    }

    int getId() {
        return this->id;
    }

    int getPrice() {
        return this->price;
    }

    int getQuantity() {
        return this->quantity;
    }

    void Display() {
        cout << "\nProduct Name      : " << this->getName() << endl;
        cout << "Product Id        : " << this->getId() << endl;
        cout << "Product Price     : " << this->getPrice() << endl;
        cout << "Product Quantity  : " << this->getQuantity() << endl;
    }
};

// Electronic Class
class Electronic : public Product {
    int warranty;
    char brand[10];

    public:
    Electronic() : warranty(0) {
        strcpy(brand, "");
    }

    Electronic(int id, char* name, int price, int qnt, char* brnd, int warranty) : Product(id, name, price, qnt) {
        strcpy(this->brand, brnd);
        this->warranty = warranty;
    }

    void setElectronic(int id, char* name, int price, int qnt, char* brnd, int warranty) {
        setProduct(id, name, price, qnt);
        strcpy(this->brand, brnd);
        this->warranty = warranty;
    }

    int getWarranty() {
        return this->warranty;
    }

    char* getBrand() {
        return this->brand;
    }

    void eleDisplay() {
        cout << "\n:::    Electronic Product details :::" << endl;
        Product::Display();
        cout << "Product Brand      : " << this->getBrand() << endl;
        cout << "Product Warranty   : " << this->getWarranty() << " Years" << endl;
        cout << "Applied Discount 10%: Final Price After Discount: " << this->getPrice() * 0.90 << " INR" << endl;
    }
};

// Grocerary Class
class Grocerary : public Product {
    char ExpDate[10];
    int weight;

    public:
    Grocerary() : weight(0) {
        strcpy(ExpDate, "");
    }

    Grocerary(int id, char* name, int price, int qnt, char* expdate, int weight) : Product(id, name, price, qnt) {
        strcpy(this->ExpDate, expdate);
        this->weight = weight;
    }

    void setGrocerary(int id, char* name, int price, int qnt, char* expdate, int weight) {
        setProduct(id, name, price, qnt);
        strcpy(this->ExpDate, expdate);
        this->weight = weight;
    }

    char* getExpDate() {
        return this->ExpDate;
    }

    int getweight() {
        return this->weight;
    }

    void GrcDisplay() {
        cout << "\n:::    Grocerary Product details :::" << endl;
        this->Display();
        cout << "Product Expiry Date   : " << this->getExpDate() << endl;
        cout << "Product Weight        : " << this->getweight() << " Gram" << endl;
        cout << "Applied Discount 5%: Final Price After Discount: " <<this->getPrice() <<this->getPrice() * 0.95 << " INR" << endl;
    }
};

// Clothing Class
class Clothing : public Product {
    char material[10];
    char size[10];

    public:
    Clothing() {
        strcpy(material, "");
        strcpy(size, "");
    }

    Clothing(int id, char* name, int price, int qnt, char* mtrl, char* size) : Product(id, name, price, qnt) {
        strcpy(this->size, size);
        strcpy(this->material, mtrl);
    }

    void setClothing(int id, char* name, int price, int qnt, char* mtrl, char* size) {
        setProduct(id, name, price, qnt);
        strcpy(this->size, size);
        strcpy(this->material, mtrl);
    }

    char* getMaterial() {
        return this->material;
    }

    char* getSize() {
        return this->size;
    }

    void ClothDisplay() {
        cout << "\n:::    Clothing Product details :::" << endl;
        this->Display();
        cout << "Product Material      : " << this->getMaterial() << endl;
        cout << "Product Size          : " << this->getSize() << endl;
        cout << "Applied Discount 20%: Final Price After Discount: " <<this->getPrice() <<this->getPrice() * 0.80 << " INR" << endl;
    }
};

int main() {
    Electronic e1;
    Grocerary g1;
    Clothing c1;

    int choice;
    do {
        cout << "\n--- Product Menu ---";
        cout << "\n1. Add Electronic Product";
        cout << "\n2. Add Grocerary Product";
        cout << "\n3. Add Clothing Product";
        cout << "\n4. Display Electronic Product";
        cout << "\n5. Display Grocerary Product";
        cout << "\n6. Display Clothing Product";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id, price, qnt, warranty;
                char name[10], brand[10];
                cout << "Enter ID, Name, Price, Quantity, Brand, Warranty: ";
                cin >> id >> name >> price >> qnt >> brand >> warranty;
                e1.setElectronic(id, name, price, qnt, brand, warranty);
                break;
            }
            case 2: {
                int id, price, qnt, weight;
                char name[10], expdate[10];
                cout << "Enter ID, Name, Price, Quantity, Expiry Date, Weight: ";
                cin >> id >> name >> price >> qnt >> expdate >> weight;
                g1.setGrocerary(id, name, price, qnt, expdate, weight);
                break;
            }
            case 3: {
                int id, price, qnt;
                char name[10], material[10], size[10];
                cout << "Enter ID, Name, Price, Quantity, Material, Size: ";
                cin >> id >> name >> price >> qnt >> material >> size;
                c1.setClothing(id, name, price, qnt, material, size);
                break;
            }
            case 4:
                e1.eleDisplay();
                break;
            case 5:
                g1.GrcDisplay();
                break;
            case 6:
                c1.ClothDisplay();
                break;
            case 7:
                cout << "Exit";
                break;
           
        }
    } while (choice != 7);

    return 0;
}
