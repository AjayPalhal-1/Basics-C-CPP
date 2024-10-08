// String
// 1. Write a program to scan string from user then scan a single character and search it in a accepted string.

#include <stdio.h>
#include <string.h>

int main()

{
    char str[50];
    char ch;
    printf(" Enter String \n");
    scanf("%s", str);
    printf("Enter SIngle char for Search\n");
    fflush(stdin);
    scanf("%c", &ch);
    //    printf("%s", str);
    //    printf("Single chr Search %d",strchr(str,'Y')-str);

    printf("Single chr Search %d", strchr(str, ch) - str);
}
