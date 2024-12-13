#include"mystack.h"

template <class T>
MyStack<T>::MyStack(int size )
{
    this->size= size;
    this->top=-1;
    this->ptr = new int [size];

}
template <class T>
bool MyStack<T>::isEmpty()
{
    if(top==-1)
    {
     cout<<endl<<"Stack Is Empty "<<endl;
     return true;
    }

    return false;
    
}
template <class T>
bool MyStack<T>::isFull()
{
    if(top==size-1)
    {
      cout<<endl<<"Stack Is Full  "<<endl;
      return true;        
    }
    return false ;
}
template <class T>
bool MyStack<T>::push(T ele )
{
    if(isFull())
    {
        return false;
    }
    ptr[++top]= ele;
    return true;
    
}
template <class T>
bool MyStack<T>::pop(T& ele)
{
    if(isEmpty())
    {
        return false;
        
    }
    // cout<<endl<<"Poped Element Is : "<<
    ele = ptr[top--];
    return true;


}
template <class T>
T MyStack<T>::peek()
{
    return ptr[top];
}
template <class T>
void MyStack<T>::display()
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