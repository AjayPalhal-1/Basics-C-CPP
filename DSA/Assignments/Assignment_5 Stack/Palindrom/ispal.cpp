#include"ispal.h"


MystringStack::MystringStack(int size )
{
    this->size= size;
    this->top=-1;
    this->ptr = new char [size];

}

bool MystringStack::isEmpty()
{
    if(top==-1)
    {
     cout<<endl<<"Stack Is Empty "<<endl;
     return true;
    }

    return false;
    
}

bool MystringStack::isFull()
{
    if(top==size-1)
    {
      cout<<endl<<"Stack Is Full  "<<endl;
      return true;        
    }
    return false ;
}

bool MystringStack::push(char ele )
{
    if(isFull())
    {
        return false;
    }
    ptr[++top]= ele;
    return true;
    
}

bool MystringStack::pop(char& ele)
{
    if(isEmpty())
    {
        return false;
        
    }
    // cout<<endl<<"Poped Element Is : "<<
    ele = ptr[top];
    top--;
    return true;


}

char MystringStack::peek()
{
    return ptr[top];
}

void MystringStack::display()
{
    if(isEmpty())
    {
        cout<<endl<<"Can't  Display Element Coz Stack Is Empty Vroo";
        return ;
    }
    cout<<"::: Display Output :::";
    for(int i=top; i>=0;i--)
    {
        cout<<endl<<"|"<<ptr[i]<<"|  ";
    }
}