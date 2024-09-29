// h. mystrrev

#include <stdio.h>
#include <string.h>
char* mystrrev(char *); 

int main()
{
    char str[50] = "Don hai Apun";

    printf("\nReversed String Is : %s\n\n", mystrrev(str));
}
char* mystrrev(char *str)
{
    int i, l;
    l = strlen(str) - 1;
    printf("l= %d", l);
    char temp;
    for (i = 0; i < l; i++, l--)
    {
        temp = str[i];
        str[i] = str[l];
        str[l] = temp;
    }
    return str;
}