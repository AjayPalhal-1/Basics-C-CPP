
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



void linkedlist::insertAtBegin(int ele)
{
    Node* temp = new Node(ele);
    temp->setNext(start);
    start=temp;

}

    void linkedlist::insertAtEnd(int ele)
    {
        Node* temp = new Node(ele);
        if(start==NULL)
        {
            start = temp;
            return;
            
        }
        Node* runner = start;
        while(runner->getNext()!=NULL)
        {
            runner=runner->getNext();
        }
        runner->setNext(temp);
    }

void linkedlist::insertAtPosition(int ele , int pos )
{
    Node* temp= new Node(ele);

    if(start==NULL)
    {
        cout<<"\n Empty Bro";
        start=temp;
        return;
    }
    if(pos==1)
    {
        temp->setNext(start);
        start= temp;
        return;
    }

    int count =1;
    Node* runner=start;

    while( count<pos -1 && runner->getNext()!=NULL)
    {
        runner = runner->getNext();
        count++;

    }
    temp->setNext(runner->getNext());
    runner->setNext(temp);
}

void linkedlist::deleteAtBegin()
{
    if(start==NULL)
    {
        cout<<"You Cant delete Its Already Empty Bro!!";
        return;
    }

    Node* Runner = start;
    start= Runner->getNext();
    delete(Runner);
}

void linkedlist::deleteAtEnd()
{
     if(start==NULL)
    {
        cout<<"You Cant delete Its Already Empty Bro!!";
        return;
    }
    if(start->getNext()!=NULL)
    {
        delete (start);
        start=NULL;

    }

    Node* runner=start;

    while(runner->getNext()->getNext()!=NULL)
    {
        runner= runner->getNext();
    }

    Node* target = runner->getNext();
    runner->setNext(NULL);
    delete (target);


}

    void linkedlist::deleteAtPosition(int pos)
    {
        if(start==NULL)
        {
            cout<<"Empty Vro";
            return;
        }

        Node* runner= start;
        if(pos==1)
        {
            start=runner->getNext();
            delete runner;

        }

        int count =1;
        while(count<pos-1 && runner->getNext()!=NULL)
        {
            runner=runner->getNext();
        }
        if(count==pos-1)
        {
            Node* target =target->getNext();
            runner->setNext( target->getNext() );
            delete target;
        }

    }



void  linkedlist::Display()
{
     if(start==NULL)
     {
        cout<<"\nLinkedList Is Empty\n";
        return;
     }

     Node* temp= start ;
     while(temp!=0)
     {
     cout<<"   "<<temp->getData();
     temp=temp->getNext();

     }
     
}
