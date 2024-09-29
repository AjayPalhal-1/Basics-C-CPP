#include<stdio.h>
void swap(int & , int & );


int main()
{
    int a =10;
    int b =20;
    swap(a,b);

}

void swap (int & c,int & d)
{
    int temp = c;
    c=d;
    d=temp;
    printf("After Swap : a = %d , b =  %d",c,d);
}

