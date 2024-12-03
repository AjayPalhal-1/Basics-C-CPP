#include"node.h"

 Node::Node(int data)
 {
    this->data=data;
        
 }


 void Node::setData(int _data)
 {
    this->data= _data;
 }

 void Node::setNext( Node* next)
 {
    this->next =next;
 }

 int Node::getData()
 {
    return this->data;
 }

 Node* Node::getNext()
 {
    return this->next;
 }