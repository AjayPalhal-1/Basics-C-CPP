    #include"list.h"
    
    
    linkedlist::linkedlist( )
    {
        this->start=NULL;
    }
    void linkedlist::setStart(Node* str)
    {
        this->start=str;

    }
    Node* linkedlist::getStart()
    {
        return this->start;
    }

    void linkedlist::insertAtPosition(int ele, int pos)
    {
        Node* temp = new Node(ele);
        if(start==NULL)
        {
            start = temp;
            return;
        }

        if(pos==1)
        {
            temp->setNext(start);
            start->setPrev(temp);
            start= temp;
            return;
        }

        int count =1;
        Node* Runner = start;
        while(count<pos-1 && Runner->getNext()!=NULL)
        {
            Runner= Runner->getNext();
            count++;
        }
    }