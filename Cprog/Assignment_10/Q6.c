// f. mystrupper

#include <stdio.h>
char * mystrupper(char *);


int main()
{
    char str1[100] = "i am ajay palhal bro";
    printf("String In Upper case : %s", mystrupper(str1));
}

char * mystrupper(char *str1)
{

    for (int i = 0; str1[i] !='\0'; i++)
    {
        if (str1[i] >= 'a' && str1[i]<= 'z')
        {
           str1[i]=str1[i]-32;
        }
    }
    return str1;
}
