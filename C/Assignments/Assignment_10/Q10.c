#include <stdio.h>

int mystrcasecmp(char* str, char* str1);

int main()
{
    char str[] = "ajaya";
    char str1[] = "AJAY";
    if (mystrcasecmp(str, str1) == 1)
    {
        printf("Strings Not Equal\n");
    }
    else
    {
        printf("Strings Are Equal\n");
    }
    return 0;
}

int mystrcasecmp(char* str, char* str1)
{
    for (int i = 0; str[i] != '\0' || str1[i] != '\0'; i++)
    {
        char c1 = str[i];
        char c2 = str1[i];

        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32;
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32;
        }

       // printf("str[i] = %c, str1[i] = %c\n", str[i], str1[i]);

        if (c1 != c2)
        {
            return 1;
        }
    }

    return 0;
}
