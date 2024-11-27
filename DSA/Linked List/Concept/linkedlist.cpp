
#include"linkedlist.h"

linkedlist::linkedlist()
{
    this->start=NULL;


}

void linkedlist::setStart(Node* start)
{
    this->start=start;
}

Node* linkedlist::getStart()
{
    return this->start;
}

void  linkedlist::Display()
{
    cout<<this->getStart()<<endl;

}

void linkedlist::insertAtBegin(int ele)
{
    Node* temp = new Node(ele);
    temp->setNext(start);
    start=temp;

}