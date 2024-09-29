#include<stdio.h>

          int  DiscountCal(int);        // Q1 
          int   BigNumCal (int,int,int);   //  Q2 
          int   Calculator(int,int);       //   Q3 
          int   menu();            //    Q4
          int  DiscountForStud(); //    Q5 
 

int main ()
{          int price =  7001;
          printf("Total Discount Is = %d\n",DiscountCal(price));      //  Q1 
          int A= 100 , B= 50 , C = 53;
          printf("Biggest No. Is = %d\n",BigNumCal(A,B,C));       //  Q2 
          int num1,num2;
          printf("Entre Your Number 1 :\n");
          scanf("%d",&num1);
          printf("Entre Your Number 2 :\n");
          scanf("%d",&num2);
          printf("Calculated Ans Is = %d\n", Calculator(num1,num2));       //  Q3 
          printf("Menu Op = %d\n",menu());            //   Q4
          printf("Discount For Student Is = %d\n",DiscountForStud()); //   Q5 
}


//  Q1 Find the price of item when discount is given (specify different discount based on
// price)

int DiscountCal(int price)
{

int Discount ; 
int final_Price ;
if (price <= 1000 )
{
Discount = price * 0.2;
printf(" You willl get 20%% Discount\n ");

}
else if (price <= 5000 )
{
Discount = price * 0.3;
printf(" You willl get 30%% Discount\n ");
}
else 
 {
Discount = price * 0.5;
//printf("You willl get 50%% Discount  %d\n",Discount);

}
final_Price = price - Discount;
printf("Your Final bill is  %d INR after getting Discount\n",final_Price);
return final_Price;
}

//Q2. Write a program to find greatest of three numbers using nested if-else.

int BigNumCal(int A,int B,int C)
{

 if(A>B)
 {
    if (A>C)
    {
        //printf(" A = %d is Gratest Number\n ",A);
        return A; 


    }
    else 
    {
        //printf(" C = %d Gratest Number \n",C);
        return B;
    }
 }
    else 
    {
         if (B>C)
      {
        if (B>A) 
        //printf(" B= %d is Gratest Number \n",B);
        return B;
      }

       
    else
    {
        //printf(" C = %d Gratest Number \n",C);
        return C;

    }

 }


}

//  Q3  Accept two numbers from user and an operator (+,-,/,*,%) based on that
//      perform the desired operations.

int  Calculator  (int num1 , int num2 )
{


int res , choice ;

printf("For Addition Press 1 \nFor Substraction  Press 2\nFor Multiplication  Press 3\n"); 
printf("For Division  Press 4\nFor Mod  Press 5\n");

printf("Entre Your Choice\n");
scanf("%d",&choice);

 
if (choice ==1)
{
    res = num1 + num2 ;
    printf("Addition Of This Two Number = %d \n", res);
    return res;
}
else if (choice ==2 )
{
    res = num1 - num2;
    printf("Substraction  Of This Two Number =  %d \n", res);
    return res;
}
else if (choice ==3 )
{
    res = num1 * num2;
    printf("Multiplication  Of This Two Number = %d \n ", res);
    return res ;
}
else if (choice ==4 )
{
    res = num1 /  num2;
    printf("Division  Of This Two Number = %d 10\n ", res);
    return res ;
}
else if (choice ==5 )
{
    res = num1 % num2;
    printf(" Mod  Of This Two Number  = %d  ", res);
    return res ;
}

}

// Q4  Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to
// enter his choice, then based on that perform the desired operations.


int  menu (){
int num=102;
printf("*********MENU************\n 1)") ;
printf("is number positive or negative \n 2)");
printf("  EVEN ODD \n3) ");
int choice=3;
if(choice==1){
if(num<1){
printf("num is negative");
}else if(num>1){
printf("num is positive");
}else{
printf("num is zero");
}
}else if(choice==2){
if(num%2==0){
printf("num is Even ");
}else{
printf("num is odd");
}
}else if(choice==3){
int rem,rev=0,n=num;
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
rem=n%10;
rev=(rev*10)+rem;
//printf("Reverse number of %d is %d\n\n",num,rev);
return rev;
}
}


// Q5. Accept the price from user. Ask the user if he is a student
// (user may say yes or no). If he is a student and he has
// purchased more than 500 than discount is 20% otherwise
// discount is 10%. But if he is not a student then if he has
// purchased more than 600 discount is 15% otherwise
// there is not discount.


int  DiscountForStud()
{
float price = 5500,discount = 0,finalPrice;
char isStud='y';
if(isStud=='y' || 'Y')
{
if(price<=500){
discount = 0.1;
}
else
{
discount = 0.2;
}
}
else if(isStud=='n'|| 'N')
{
if(price >600){
discount = 0.15;
}
}
printf("Your purchased price is %f ",price);
//printf("\nDiscount : %f %% \n final price : %f ",discount,price-(price * discount));
return (price-(price * discount));
}
 
