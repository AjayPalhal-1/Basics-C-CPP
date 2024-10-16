// Write a code to find vowels and consonant and number is given Strin 



#include<stdio.h>

#include<string.h>

void findvowel(char * );
void findconsonants(char * );
 void findnumbers(char* );




int main ()
{

    printf("Enter A String : ");
    char str[20];
    scanf("%s",str);
    printf("String Is : %s\n\n",str);

    findvowel(str);
    findconsonants(str);
    findnumbers(str);



}

void findvowel(char * str)
{
     int count =0;

   for(int i =0; str[i]!='\0';i++)
   {  

    if(str[i] == 'a' ||  str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
    str[i] == 'A' ||  str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        count ++;
    }    
   }

   printf("Total No. Of Vowel in String is : %d \n\n",count);

}


void findconsonants(char * str)
{
         int count =0;

    for(int i =0; str[i]!='\0';i++)
   {  

    if(str[i] != 'a' &&  str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
    str[i] != 'A' &&  str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
    {
        count ++;
    }    
   }

   printf("Total No. Of Consonants in String is : %d \n\n",count);
}

 void findnumbers(char* str)
 {
    int count =0;

    for(int i =0; str[i]!='\0';i++)
   {  

    if(str[i] >= 'a' || str[i] <='z' || str[i] >= 'A' || str[i]<='Z')
    {
        count ++;
    }    
   }

   printf("Total No. Of Number in String is : %d \n\n",count);
}

 
