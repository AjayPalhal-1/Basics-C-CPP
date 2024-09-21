#include <stdio.h>

int main()
{
    char str[10] = "rare";
    char vis;
    char ch;

    
    for (int i = 0; str[i] != '\0'; i++)
    {  ch = str[i];
        int count = 0;
        if (str[i] == ch)        
        {    
            for(int j=0;str[j]!='\0';j++)
            {
               if(str[j]==ch)
               {
                 count++;
               }
              
            }
             vis = str[i];
           
        }
         printf("%c Occures %d time\n",ch,count);
    }
}