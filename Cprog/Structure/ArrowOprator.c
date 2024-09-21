#include<stdio.h>


typedef struct student 
{
    int roll;
    char name[50];
} student ;
 
 void store (student * s)
 {
    // *(s).roll=45;
 }


int main ()
{
    student s1 ;
 
    s1.roll=23;

    printf("%d",s1.roll);

}