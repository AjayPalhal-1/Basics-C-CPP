#include<stdio.h>
int main (){


    //234 add all digit  of this two no.
   int num , a ,b,c , e,add ;
   num = 234;
   a = num % 10;
   b = num/10;
   c= b % 10;
   e = b/10;
    add = a + c + e;
   printf("SUM OF THIS Three NO. %d \n",add);



    //2345 add all digit  of this  no.

   int num1 , a1 ,b1,c1 , e1, f1,  g1 , add1 ;
   num1 = 2345;
   a1 = num1 % 10;  
   b1 = num1/10;
   c1= b1 % 10;
   e1 = b1/10;
   f1= e1 % 10;
   g1 = e1/10;

    add1 = a1+c1+g1+f1;
   printf("SUM OF THIS four NO. %d \n",add1);




    //23456 add all  5 digit  of this  no.

   int num2 , a2 ,b2,c2 , e2, f2,  g2 , add2 ,h2 ,i2;
   num2 = 23456;
   a2 = num2 % 10;
   b2 = num2/10;
   c2= b2 % 10;
   e2 = b2/10;
   f2= e2 % 10;
   g2 = e2/10;
   h2= g2%10;
   i2= g2/10;

    add2 = a2 +c2+f2+h2+i2;
   printf("SUM OF THIS five NO. %d \n",add2);



    //234567 add all  6 digit  of this  no.

   int num3 , a3 ,b3,c3 , e3, f3,  g3 , add3 ,h3 ,i3 , j3,k3 ;
   num3 = 234567;
   a3 = num3 % 10;
   b3 = num3/10;
   c3= b3 % 10;
   e3 = b3 /10;
   f3= e3 % 10;
   g3 = e3/10;
   h3= g3%10;
   i3= g3/10;
   j3 = i3 %10;
   k3=i3/10;

    add3= a3+c3+f3+h3+j3+k3;
   printf("SUM OF THIS SIx NO. %d \n",add3);



   //2345678 add all  7 digit  of this  no.

   int num4 , a4 ,b4,c4 , e4, f4,  g4 , add4 ,h4 ,i4 , j4,k4,l4,m4;
   num4 = 2345678;
   a4 = num4 % 10;
   b4 = num4/10;
   c4= b4% 10;
   e4 = b4 /10;
   f4= e4% 10;
   g4 = e4/10;
   h4= g4%10;
   i4= g4/10;
   j4 = i4 %10;
   k4=i4/10;
   l4= k4%10;
   m4= k4/10;

    add4= a4+c4+f4+h4+j4+l4+m4;
   printf("SUM OF THIS SEVEN  NO. %d \n",add4);

    //return 0 ;
}