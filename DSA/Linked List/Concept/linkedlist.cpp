
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
     if(start==NULL)
     {
        cout<<"\nLinkedList Is Empty\n";
        return;
     }

     Node* temp= start ;
     cout<<"Data : "<<temp->getData();
     temp=temp->getNext();
}

void linkedlist::insertAtBegin(int ele)
{
    Node* temp = new Node(ele);
    temp->setNext(start);
    start=temp;

}

    void lineklist::insertAtEnd(int ele)
    {
        Node* temp = new Node(ele);
        if(start==NULL)
        {
            
        }

    }
