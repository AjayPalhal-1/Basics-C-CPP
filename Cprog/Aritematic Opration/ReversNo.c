int main (){
    int num = 1234;
    int r1 , r2 , r3,r4 ,q2,q3,q4,q5 ;
    int rev = 0;

     r1 = num %10;
     q2 = num/10;
     rev = (rev *10)+r1;
     printf("%d\n",rev);

     r2 = q2 %10;
     q3= q2 /10;
     rev = (rev *10)+r2;
     printf("%d\n",rev);

     r3 = q3 %10;
     q4= q3 /10;
     rev = (rev *10)+r3;
     printf("%d\n",rev);

     r4= q4 %10;
     q5= q4 /10;
     rev = (rev *10)+r4;
     printf("%d\n",rev);




     /*
     Logic for this code 
     1. we have to seprate that provided No. Using Mod and Div Operation 
     2. after that we need to creat a variable to store reversed no which will be obtained by step by step 
     */
}
    