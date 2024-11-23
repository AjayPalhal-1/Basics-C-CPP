#include"concept.h"

CQ::CQ(int s )
{
    this->front=-1;
    this->rear=-1;
    this->size=s;
    this->ptr= new int [size];

}

bool CQ::isEmpty()
{
    if((rear==-1 && front==-1))
    {
        cout<<"\n Queue Is Empty \n";
        return true;
    }
    return false;


}

bool CQ::isFull()
{
    if((rear == size- 1 && front==0) || (front ==rear +1))
    {
        cout<<"\n Queue Is Full \n";
        return true ;

    }

    return false;

}

void  CQ::Insert(int ele)
{
    if(isFull)
    {
        cout<<"\nYou can't Add Element\n";
    }

    else if(isEmpty())
    {
        rear=0;
        front=0;
    }
    else if(rear==size-1)
    {
        rear=0;
    }
    else
    {
        rear++;
     }
      ptr[rear] =ele;

}

void CQ::Delete(int& ele)
{
    if(isEmpty())
    {
        cout<<"You can't Delete Element \n";

    }
    else 
    {
        ele= ptr[front];
        if(rear == front )
        {
            rear=front=-1;

        }
        else if(front==size-1)
        {
            front =0;
        }
        else {
            front++;
        }
    }
    
}

void CQ::Display()
{
    if(isEmpty())
    {
        cout<<"\n You can't Disply Element \n";
    }
    else {

        int i=front ;
        while()
    }

}