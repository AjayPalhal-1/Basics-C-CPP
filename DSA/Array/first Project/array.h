#include<iostream>
using namespace std;


class MyArray
{
    int size;
    int index;
    int* arr;
    
    public:
    MyArray (int);
    bool insert(int );
    bool remove(int );
    bool isFull();
    bool isEmpty();
    void display();


};