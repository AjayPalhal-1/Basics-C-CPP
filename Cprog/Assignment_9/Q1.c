//   Assignment 9
//   String built in function
//    1. Use around 15 built-in functions of string in program

#include <stdio.h>

int main()
{
    char str1[10] = "AJAY";
    char str2[10] = "PALHAL";
    char str3[10];
    char str4[10];
    //  char* ch=&str1;

    // In Build func 1 : strlen();
    int length = strlen(str1);
  printf("\nlength of str1 (%s)= %d",str1,length);

    // In Build func 2 : strcpy();
  printf("\nCopied String 1 in Str 3 is %s ",strcpy(str3,str1));

    // In Build func 3 : strcmp();
  printf("\nCampred String 1 with String 2  is : %d ",strcmp(str1,str2));

    // In Build func 4 : strstr();
 printf("Finding The substring In Main String is %s ", strstr(str1, "AY"));
  printf("\nFinding Add . The substring In Main String is %u ", strstr(str1, "AY"));
   // printf("\nFinding Index . The substring In Main String is %d", (strstr(str1, "AY") - str1));
    // printf("\nFinding Index . The substring In Main String is %d ",strstr(str1,"AY") - ch );

    // In build func 5 : strchr () Purpose: Finds the first occurrence of a character in a string.
  printf("/nChar 'L ' Found at %d this index ",strchr(str2,'L')- str2);


// Func 6 : strrchr()  Purpose: Finds the last occurrence of a character in a string.
  printf("Last Occurance of P Is  %d  \n ",strrchr(str2,'P')-str2);


   //Func 7 : strspn();
   //Purpose: Calculates the length of the initial segment of a string that consists only of characters from a specified set.
   printf("Length of initial segment is %d  \n ",strspn(str2,"PL"));


// Func 8 :  strdup())Purpose: 
//Duplicates a string by allocating memory for a new string and copying the contents of the original string into it.
  printf(" Duplicate of str2 orignal = (%s) Duplicate = %s  \n ",str2,strdup(str2));

 // Func 9 :  strncpy (): Copy up to n characters from source to destination.
   printf(" Copy of str2 %s in str4 %s After copy str4 is  %s  \n ",str2,str4,strcpy(str4,str2));


    // Func 10 : strstr () : finding substring 
   printf(" Substring in str2 is  (%s) Duplicate = %s  \n ",str2,strstr(str2,"AL"));


   //Func 11 : strcspn() :  Calculate the length of the initial segment of a string that does not contain any characters from a specified set.
   printf(" length of initial str1 (%s) %d  \n ",str1,strcspn(str1,"J"));

  // Func 12  strncmp: Compare up to n characters of two strings.
  printf("Campred String 4 with String 3  is : %d \n",strncmp(str4,str2,3));




}