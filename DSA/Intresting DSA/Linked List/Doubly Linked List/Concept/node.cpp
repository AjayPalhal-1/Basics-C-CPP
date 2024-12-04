#include"node.h"

Node::Node(int data , Node* prev , Node* nxt)
{
    this->data= data;
    this->next= NULL;
    this->prev= NULL;
}

Node::Node(int data )
{
    this->data= data;
    
}

void Node::setData(int d)
{
    this->data=d;
}
void Node::setPrev(Node* prev)
{
    this->prev= prev;
}
void Node::setNext(Node* nxt)
{
    this->next=nxt;
}

int Node::getData()
{
    return this->data;
}

Node* Node::getNext()
{
    return this->next;
}

Node* Node::getPrev()
{
    return this->prev;
}