#include<stdio.h>

int lenthOfString(char*);

int main(){
    char str[20]= "AJAY";

    int len = lenthOfString(str);
    printf("%d len \n",len);

    for(int i =0; str[i]!='\0';i++)
    {
        for(int j=len-1; j>len/2 ; j--)
    {
        char ch = str[i];
        str[i]= str[j];
        str[j]= ch;
    }
    }
    printf(" Final reversed  String %s: ", str);
    
return 0;
}

int lenthOfString(char* str)
{
    int count =0;
     for(int j=0; str[j]!='\0';j++)
    {   count++;
    }
         return count;


}