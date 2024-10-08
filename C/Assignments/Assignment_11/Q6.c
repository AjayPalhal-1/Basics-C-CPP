// WAP to Take in a String and Replace Every Blank Space with special symbol.


#include<stdio.h>

int main()
{

    char str[50]= "AJAY PAHAL ENTCSTUDENT ";
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i]='^';
        }

    }

    printf("Final Strig iS : %s",str);
}