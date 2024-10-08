// Assignment 14
// Structure
// 1. Create a structure Book with data members as bname, id, author, price. Accept the
// values of all these members from user and display them.

#include<stdio.h>
#include<string.h>

typedef struct book 
{
    char bname[10];
    int id;
    char autor[10];
    int price ;
   

}book;


 void Store(book*);
 void display(book*) ;

int main()
{
    book b1 ,b2 ;
    Store(&b1);
    display(&b1) ;

}

void Store(book* b1)
{   
   printf("::::: Inputs From User  :::::\n\n");
    printf("Enter Book Name :\n");
    
    scanf("%s",b1->bname);
    

    printf("Enter Book Id :\n");
    scanf("%d",&b1->id);
   
    printf("Enter Autor Name :\n");
    
    scanf("%s",b1->autor);

     printf("Enter Book Price : \n");
    scanf("%d",&b1->price);
}   

void display(book* b1)
{   
    printf("|\n\n\n ::::: Output :::::\n\n");
    printf("\nBook Name : %s",b1->bname);
    printf("\nBook Id : %d",b1->id);    
    printf("\nAutor Name : %s",b1->autor);
    printf("\nBook Price : %d\n\n",b1->price);
}   
