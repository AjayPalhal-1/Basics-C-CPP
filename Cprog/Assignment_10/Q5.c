// mystrncpy

#include <stdio.h>
char *mystrncpy(char *, char *,int );

int main()
{
     int n = 1;
    char str1[50]=
    char str2[50] = "ANKUSH PAWAR";
    printf(" Copied String1 is : %s ", mystrncpy(str1, str2,n));
}

char *mystrncpy(char *str1 , char *str2 , int n)
{
    int i;
    for (i = 0; i<n && str2[i]!='\0'; i++)
    {
        str1[i] = str2[i];
        //   printf("%s",str1[i]);
    }
    return str1;
}
