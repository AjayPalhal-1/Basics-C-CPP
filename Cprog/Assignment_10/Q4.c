#include<stdio.h>
#include<string.h>

char* mystrcat(char* ,char*);
//MYSTRCAT
int main ()
{     
    char str1 [50]="AJAY";
    char str2 [50]="_PALHAL";
    //char str3 [50];

   printf("str3 : %s",mystrcat( str1,  str2));

}
char*  mystrcat(char * str1 , char* str2  )
{


int i = strlen(str1);
int j=0;
//printf("len1 = %d ",len1);
for (; str2[j] !='\0';i++,j++)
{
    str1[i]=str2[j];
}

return str1 ;
}
