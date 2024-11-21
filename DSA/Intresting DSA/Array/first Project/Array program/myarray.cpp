#include"myarray.h"


MyArray::MyArray(int s)
{
	size = s;
	index = -1;
	arr = new int[size];
	
}

bool MyArray::isEmpty()
{
	if(index == -1)
	{
		cout<<endl<<"Array is empty"<<endl;
		return true;
		
	}
	return false;
}


bool MyArray::display()
{
	if(isEmpty())
	{
		return false;
	}
	
	for(int i=0;i<=index;i++)
	{
		cout<<arr[i]<<"  ";
	}
	return true;
}


bool MyArray::isFull()
{

	if(index+1 == size)
	{
		cout<<endl<<"Array is Full"<<endl;
		return true;
	}
	return false;
	
	
}


bool MyArray::addEle(int x)
{
	if(isFull())
	{
		return false;
	}
	this->arr[++index] = x;
	return true;
	
}



bool MyArray::deleteEle(int pos)
{
	if(isEmpty())
	{
		return false;
	}
	
	for(int i=pos;i<=index-1;i++)
	{
		arr[i] = arr[i+1];
	}
	index--;
	return true;
	
	
}

int MyArray::search(int x)
{
	if(isEmpty())
	{
		return -1;
	}
	for(int i=0; i<=index;i++)
	{
		if(arr[i]== x)
		{
			return i;
		}
	}
	return -1;
}


MyArray::~MyArray()
{
	delete[] arr;
	
	cout<<endl <<"Array deleted"<<endl;
}


	MyArray::MyArray(MyArray& o )
	{
		this->size=o.size;
		this->arr=o.arr;
		this->index=o.index;
	}







