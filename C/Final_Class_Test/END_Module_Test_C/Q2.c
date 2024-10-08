#include <stdio.h>

int main()
{
    char str[10] = "rare";
    char vis[10]="\0";
    char ch;

    
    for (int i = 0; str[i] != '\0'; i++)
    { // ch = str[i];
        int count =1;
        if (vis[i]!=str[i])        
        {    
            for(int j=i+1;str[j]!='\0';j++)
            {
               if(str[i]==str[j])
               {
                 count++;
               }
              
            }
            vis[i] = str[i];
           
        }
         printf("%c Occures %d time\n",str[i],count);
    }
}