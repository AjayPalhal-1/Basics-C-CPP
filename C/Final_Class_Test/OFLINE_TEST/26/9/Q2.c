// Reverse the string 
#include<stdio.h>
#include<string.h>


int main ()
{
    char str[10];
    printf("Enter String To Reverse ");
    char ch ;
    scanf("%s",str);
    int len = strlen(str);
    printf("len = %d\n",len);
    for(int i =0;str[i]!='\0';i++)
    {
        for(int j=len-1;j>=0;j--)
        {
            ch= str[i];
            str[i]=str[j];
            str[j]=ch;
        }
    }
    printf("Reversed String : %s",str);
}