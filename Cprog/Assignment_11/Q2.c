// WAP Replace all Occurrences of ‘a’ with $ in a String

#include <stdio.h>
int main()
{

    char str[50] = "AJAY_ANKUSH_AMOL";
    for(int i =0;str[i]!='\0';i++)
    {
        if(str[i]=='A')
        {
            str[i]='$';
        }
    }
    printf("Str : %s",str);

}
