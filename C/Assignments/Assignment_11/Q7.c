// 7. WAP to Remove the Characters of Odd Index Values in a String
#include<stdio.h>

int main ()
{
    char str[50]="123456789";

    for(int i=0; str[i]!='\0';i++)
    {
        str[++i]='_';
        
         
        
    }
     printf("Final String : %s",str);
  
}