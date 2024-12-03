#include"node.h"

Node::Node(int ele, Node* next)
{
    this->data= ele;
    this->Next= next;

}

Node::Node(int data)
 {
    this->data=data;
        
 }

void Node::setData(int ele){ this->data= ele; }
void Node::setNext(Node* next){this->Next= next;}

int Node::getData()    {return this->data;}
Node* Node::getNext()  {return this->Next;}