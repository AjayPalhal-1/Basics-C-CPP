#include<stdio.h>

int main ()
{

    char str [10]="ABC123XYZ";
        int i ;

    while(str[i]!='\0')
    {
        if(str[i]<= '0' && str[i]>= '9' );
        {
            printf("%s  ",str[i]);
        }
    }
}