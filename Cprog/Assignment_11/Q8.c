//8. WAP to Calculate the Number of Words Present in a String


#include<stdio.h>

int main()
{
    char str[50]=" Guys_I Am,Ajay.From My Home";
    int count =0;

    for(int i =0;str[i]!='\0';i++)
    {    
        if(str[i]==' ' || str[i]=='_' || str[i]==','||str[i]=='.')
        {
            count ++;

        
        }
    }
    printf("Total Word Is %d",count);
}