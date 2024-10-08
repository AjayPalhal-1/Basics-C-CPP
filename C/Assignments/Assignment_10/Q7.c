//g. mystrlower


// f. mystrlower

#include <stdio.h>
char * mystrlower(char *);


int main()
{
    char str1[100] = "i am ajay palhal bro";
    printf("String In Lower case : %s", mystrlower(str1));
}

char * mystrlower(char *str1)
{

    for (int i = 0; str1[i] !='\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i]<= 'Z')
        {
           str1[i]=str1[i]+32;
        }
    }
    return str1;
}
