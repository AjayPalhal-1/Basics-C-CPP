#include <stdio.h>
char *mystrcpy(char *, char *);

int main()
{
     
    char str1[50];
    char str2[50] = "ANKUSH PAWAR";
    printf(" Copied String is : %s ", mystrcpy(str1, str2));
}

char *mystrcpy(char *str1, char *str2)
{
    int i;
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
        //   printf("%s",str1[i]);
    }
    return str1;
}
