#include<stdio.h>
void myfunc (int , int  , int  );
int main ()
{
    int rem , orgnum ,add , Div ,num ; 
     
    printf(" Enter the No . ");
    scanf("%d",&num);
    orgnum = num ;


    if(num<=9)
    {
        Div = 10;
         myfunc(num ,  Div ,orgnum);
    }
    else if (num<=99)
    {   Div = 100;
        myfunc (num ,  Div ,  orgnum  );
    }

     else if (num<=999)
    {   Div = 1000;
        myfunc (num ,  Div ,  orgnum  );
    }
      else if (num<=9999)
    {   Div = 10000;
        myfunc (num ,  Div ,  orgnum  );
    }
    //  else if (num<=999999)
    // {   Div = 1000000;
    //     myfunc (num ,  Div ,  orgnum  );
    // }



}

void myfunc (int num , int Div , int orgnum  )
{
     int rem ,sqr,add =0 ;
     sqr = num*num ; 
   
        rem = sqr % Div ;
        sqr =  sqr / Div ;
        add = rem + sqr ;
                
    
    if(add==orgnum)
        {
            printf(" Given %d Is Karperkar Kaka Cha No. ",orgnum );
        }
}