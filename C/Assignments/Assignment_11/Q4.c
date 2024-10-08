// WAP to Form a New String where the First Character and the Last Character have been Exchanged

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char ch;
    printf(" Enter String \n");
    gets(str);
    ch = str[0];
    int len = strlen(str) - 1;
    // printf("Length = %d\n",len);
    // printf("last char : %c",str[len]);

    str[0] = str[len];
    str[len] = ch;
    printf("Upadated String %s\n", str);
}