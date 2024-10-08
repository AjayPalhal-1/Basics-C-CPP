
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "ABA";
    char str2[50];
    int len = strlen(str);
    int i;

    for (i = 0; i < len; i++) 
    {
        str2[i] = str[len - i - 1];
    }
    str2[len] = '\0';

    printf("Reversed string: %s\n", str2);

    if (strcmp(str, str2) == 0)
    {
        printf("The provided string is a palindrome.\n");
    }
    else
    {
        printf("The provided string is not a palindrome.\n");
    }

    return 0;
}