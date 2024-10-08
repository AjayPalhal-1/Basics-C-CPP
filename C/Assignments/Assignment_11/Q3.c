// WAP to Remove the nth Index Character from a Non-Empty String

#include <stdio.h>

int main()
{
    char str[50];
    int ind;
    printf("Enter the String\n");
    // scanf("%s",str);
    gets(str);
    printf("Enter The Index That You Want to Delete From Above String\n");

    scanf("%d", &ind);

    str[ind] = '_';
    printf("After Deleting index from  String is: %s\n", str);
}