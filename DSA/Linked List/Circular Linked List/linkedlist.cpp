#include"linkedlist.h"


linkedlist::linkedlist(Node*)
{
    this->last=NULL;
}

linkedlist::linkedlist()
{
    last =NULL;
}
void linkedlist::setLast(Node* lst)
{
    this->last=lst;

}

Node* linkedlist::getLast()
{
    return this->last;
}

void linkedlist::insertAtBegin(int ele)
{
    Node* temp= new Node(ele);
    if(last==NULL)
    {
        last= temp;
        temp->setNext(last);

    }

}

void linkedlist::Display()
{
    cout<<"  "<< last->getData()<<endl;
}