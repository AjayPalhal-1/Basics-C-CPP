#include <iostream>
#include <cstring>
using namespace std;

class Vehicle {
private:
    char name[20];
    double price;

public:
    // Default Constructor: Initializes the attributes
    Vehicle() 
    {
        strcpy(this->name, "NOT_GIVEN");
        this->price = 0.0;
    }

    // Parameterized Constructor: Initializes the attributes

    Vehicle( char* name, double price) 
    {
        strcpy(this->name, name);
        this->price = price;
    }

    // Setter: Sets values for attributes
    void setName( char* name)
     {
        strcpy(this->name, name);
    }

    void setPrice(double price) {
        this->price = price;
    }

    // Getter: Get values of attributes
     char* getName()
      {
        return this->name;
    }

    double getPrice() 
    {
        return this->price;
    }

    // Display: Displays vehicle information
   virtual void display()
     {
        cout << "Vehicle Name: " << this->getName() << endl;
        cout << "Vehicle Price: " << this->getPrice() << endl;
    }
};

class Bike : public Vehicle
 {
private:

    int cc; // engine capacity

public:
    // Default Constructor: Initializes the attributes
    Bike() : Vehicle() {
        this->cc = 0;
    }

    // Parameterized Constructor: Initializes the attributes
    Bike( char* name, double price, int cc) : Vehicle(name, price)
     {
        this->cc = cc;
    }

    // Setter: Sets values for attributes of Bike
    void setCc(int cc) 
    {
        this->cc = cc;
    }

    // Getter: Retrieves values of attributes of Bike
    int getCc() {
        return this->cc;
    }

    // Display: Displays Bike information
    void display() {
        Vehicle::display();
        cout << "Bike CC: " << this->getCc() << endl;
    }
};

class Car : public Vehicle 
{
private:
    int doors; // number of doors

public:
    // Default Constructor: Initializes the attributes
    Car() : Vehicle()
     {
        this->doors = 0;
    }

    // Parameterized Constructor: Initializes the attributes
    Car( char* name, double price, int doors) : Vehicle(name, price)
    {
        this->doors = doors;
    }

    // Setter: Sets values for attributes of Car
    void setDoors(int doors) 
    {
        this->doors = doors;
    }

    // Getter: get values of attributes of Car
    int getDoors() 
    {
        return this->doors;
    }

    // Display: Displays Car information
    void display() 
    {
        Vehicle::display();
        cout << "Car Doors: " << this->getDoors() << endl;
    }
};

class Bus : public Vehicle 
{
private:
    int capacity; // passenger capacity

public:
    // Default Constructor: Initializes the attributes
    Bus() : Vehicle() {
        this->capacity = 0;
    }

    // Parameterized Constructor: Initializes the attributes
    Bus( char* name, double price, int capacity) : Vehicle(name, price) 
    {
        this->capacity = capacity;
    }

    // Setter: Sets values for attributes of Bus
    void setCapacity(int capacity) {
        this->capacity = capacity;
    }

    // Getter: get values of attributes of Bus
    int getCapacity() 
    {
        return this->capacity;
    }

    // Display: Displays Bus information
    void display()
     {
        Vehicle::display();
        cout << "Bus Capacity: " << this->getCapacity() << endl;
    }
};




int main()
 {


    Bike bike("Yamaha", 150000, 150);
    cout << "Bike Information:" << endl;
    bike.display();
    cout << endl;

    Car car("Toyota", 30000, 4);
    cout << "Car Information:" << endl;
    car.display();
    cout << endl;


    Bus bus("Mercedes", 6000000, 50);
    cout << "Bus Information:" << endl;
    bus.display();
    cout << endl;

    return 0;
}
