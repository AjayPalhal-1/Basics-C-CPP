// j. mystrcasecmp


#include<stdio.h>
int mystrcasecmp (char*  , char*);



void main()
{
    char str[]="ajaya";
    char str1[]="AJAY";
    if(mystrcasecmp(str,str1)==1)
    {
        printf("Strings Not Equal\n");
    }
    else
    {
    printf("Strings Are Equal\n ");
        }


    
}


int mystrcasecmp(char* str , char* str1)
{
   for(int i =0;str[i]!='\0'||str1[i]!='\0';i++)
   {
    printf("str[i] = %d\nstr1[i] = %d\n",str[i],str1[i]);

    if(str[i]-32 != str1[i])
    {
        return 1;
    }
    else
    {
      return 0;
    }

   }
} 