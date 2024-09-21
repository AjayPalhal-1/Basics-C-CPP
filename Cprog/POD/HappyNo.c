#include<stdio.h>

 int  SepSqrAdd ();
int main ()
{
 int res2 ,res3;

   int res = SepSqrAdd ();
   printf("res = %d \n",res);

   
//    if (res > 9 )
//    {
//      res2 = SepSqrAdd ();
   
//    printf("res2 = %d \n",res2);
//    }
//     if(res2 >9)
//    {
//     res3 = SepSqrAdd();
//     printf(" res3 = %d \n",res3);
//    }

//    if(res3==1)
//    {
//     printf(" Given No  is Happy \n" );
//    }
//    else
//    {
//         printf(" Given No  is Not Happy " );

//    }
while(res>9)
{ 
       res2 = SepSqrAdd ();
   
       printf("res2 = %d \n",res2);
       
       if(res3==1)
   {
    printf(" Given No  is Happy \n" );
   }
   else
   {
        printf(" Given No  is Not Happy " );
    
}
}

int SepSqrAdd ( )
{   int rem ,num ,Fadd=0;
     printf(" Enter The No \n");    
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num % 10;
        num = num/10;
        Fadd = Fadd+ rem*rem ;
        //printf("Fadd = %d \n",Fadd);
       // printf("num = %d \n",num);
       // printf("dev = %d \n",dev);
       // printf("rem = %d \n",rem);
    }
            return Fadd ;
}