#include<stdio.h>

int sum (int* , int*);


int main ()
{

    int num = 10 ;
    int add = 0;



    printf(" Num = %d ", num );

     sum(&num,&add);
     printf(" Addition Upto Num = %d \n\n\n ", add);
    
}
int sum(int* a, int* add)
{

    while(*a > 0)
    {
        printf(" \n *a =  %d\n",*a);
        *add= (*add )+ (*a);
        *a=*a-1;// Can We Decrement the Pointers (  *a--) ;
        printf(" *a2 =  %d\n",*a);

    }
}