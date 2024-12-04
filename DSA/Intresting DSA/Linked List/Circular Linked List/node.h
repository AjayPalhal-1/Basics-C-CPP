#include<iostream>
using namespace std;


class Node
{
    int data ;
    Node* Next;

    public:
    Node(int , Node*);
    Node(int );


    void setData(int);
    void setNext(Node*);
    int getData();
    Node* getNext();
};