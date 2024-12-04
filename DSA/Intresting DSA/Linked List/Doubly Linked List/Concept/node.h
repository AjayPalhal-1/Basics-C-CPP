#include<iostream>
using namespace std;


class Node 
{
    int data ;
    Node* prev;
    Node* next;

    public:

    Node(int , Node* , Node* );
    Node(int);
    void setData(int);
    void setPrev(Node* );
    void setNext(Node*);
    int getData();
    Node* getPrev();
    Node* getNext();


};