
#include<stdio.h>

int  main ()
{


    int num ;
    printf(" Entre the Number ");
    scanf("%d",&num);

    if (num >0 )
    {
        printf(" Number Is Positive  ");
    }
   else  if (num <0 )
    {
        printf(" Number Is Negative  ");
    }
  else   if (num ==  0 )
    {
        printf(" Number Is Neutral   ");
    }

}