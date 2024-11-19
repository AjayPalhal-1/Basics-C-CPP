#include<iostream>

using namespace std;

class MyArray
{
	int size, index;
	int *arr;
	
	public:
		bool isEmpty();
		bool isFull();
		MyArray(int s);
		bool addEle(int);
		
		bool display();
		bool deleteEle(int);
		int search(int);
		~MyArray();
		MyArray(MyArray& );


		
		
};
