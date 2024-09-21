#include<stdio.h>
#include<string.h>

int main ()
{
    char str1 [50]="A";
    char str2 [50]="B";

   printf("%d " ,mystrcmp (str1,str2));

}

int  mystrcmp (char* str1  , char* str2)
{
    int i;
    if(strlen(str1)==strlen(str2))
    {  
    printf(" Both String Are Equal \n");
    return 0;
    }
    else if (strlen(str1)>strlen(str2))
    {
         printf("String 1 Big  \n");
        return -1 ;
    }
    else if (strlen(str1)<strlen(str2))
    {
        printf("String 2 Big  \n");
        return 1 ;
    }


    // for (i = 0; str1[i] != '\0'; i++)
    // {    int count =1 ;
    //     if (str1[i] == str2[i])
    //     {
    //           count -- ;        }
    //     return count ;
    // }


    // return str1;

}