// WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include <stdio.h>

int main()
{
    char str[50] = "AJAY PALHAL FROM MY ROOM ";
    char str1[50] = "AJAY PALHAL";

    int count = 0;
    int count1 = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1++;
    }
    if (count1 > count)
    {
        printf("2nd String is Larger ");
    }
    else 
    {
           printf("1st String is Larger ");
        
    }
}