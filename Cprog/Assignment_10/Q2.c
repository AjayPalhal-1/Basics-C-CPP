//WAP For MAking User Define Fucn strlen


#include<stdio.h>

int mystrlen(char* );




int main()
{
  printf("Enter The String Str =  \n");
  char Str[50]; 
  scanf("%s",&Str);
  int Length =  mystrlen(Str);
  printf(" Lenght of Provided String Is = %d ",Length);
}

int mystrlen(char * Str )
{    int i ,count=0;
    //char ch []= "AJAY_PALHAL ";
    for(i=0; Str[i]!='\0';i++)
    {
       count ++ ;    
     
    }
     //printf(" Size Of Ch is = %d ",count);
    
    return count ;
}

