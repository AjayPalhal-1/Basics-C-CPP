#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int count = 0;
    char vowl[] = "aeiouAEIOU"; 

    printf("Enter a string: \n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; vowl[j] != '\0'; j++)
        {
            if (str[i] == vowl[j])
            {
                count++;
            }
        }
    }

    printf("Total Count of Vowels in the string is = %d\n", count);

    return 0;
}
