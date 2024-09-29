#include <stdio.h>
void swap( int*, int*);

int main ()
{
    int num1 = 100, num2 = 200 , temp ;

    printf(" num1 = %d , num2  = %d \n ", num1,  num2 );

  swap(&num1 , &num2 );// while calling the function dont give data types 
    printf(" num1 = %d , num2  = %d ", num1 ,num2 );
    int* ptr = &num1;
    printf(" Add of PTR =  %d , ", ptr ); 
        printf("\n  Add of NUM1 =  %d , ", &num1 ); 



    return 0;

            
}


void swap( int* a , int* b  )
{
 int temp = *a ;
 *a = *b ;
 *b = temp ;

}