#include"mystack.h"


MyStack::MyStack(int size )
{
    this->size= size;
    this->top=-1;
    this->ptr = new int [size];

}

bool MyStack::isEmpty()
{
    if(top==-1)
    {
     cout<<endl<<"Stack Is Empty "<<endl;
     return true;
    }

    return false;
    
}

bool MyStack::isFull()
{
    if(top==size-1)
    {
      cout<<endl<<"Stack Is Full  "<<endl;
      return true;        
    }
    return false ;
}

bool MyStack::push(int ele )
{
    if(isFull())
    {
        return false;
    }
    ptr[++top]= ele;
    return true;
    
}

bool MyStack::pop(int& ele)
{
    if(isEmpty())
    {
        return false;
        
    }
    // cout<<endl<<"Poped Element Is : "<<
    ele = ptr[top--];
    return true;


}

int MyStack::peek()
{
    return ptr[top];
}

void MyStack::display()
{
    if(isEmpty())
    {
        cout<<endl<<"Can't  Display Element Coz Stack Is Empty Vroo";
        return ;
    }
    cout<<"::: Display Output :::";
    for(int i=0; i<size;i++)
    {
        cout<<endl<<ptr[i]<<"  ";
    }
}