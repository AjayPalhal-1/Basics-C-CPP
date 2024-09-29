#include<stdio.h>
    int  NumPrint(int);    // Q1 
    int  PrintTable (int);  // Q2 
    int  CalSum(int ,int);       // Q3
    int PrimeNum(int);     // Q4 
    int  ArmStrongNum(int); // Q5 
    int  PerfectNum(int);   // Q6
    int  IsFactorial();  // Q7
    int  IsStrong(int);     // Q8
    int   IsPalindrome(); // Q9 
    int   Add1stNumlstnum();// Q10

int main ()
{   int num = 1;
    NumPrint(num);    // Q1 

    int mynum = 19;
    PrintTable(mynum);  // Q2 

    int start , stop;
    printf(" Enter the starting range\n ");
    scanf("%d",& start);
    printf(" Enter the Stop range \n");
    scanf("%d",& stop );

    printf("Addtion of this range is  %d \n",CalSum(start,stop));       // Q3

    int num2=90;
     printf("Given No. i.e. %d is Not  prime Number\n\n",PrimeNum(num2)); // Q4 

    int num3;
    printf(" Enter The No. You want to check i.e. Armstrong  No. or not \n\n");
    scanf("%d",&num3);
    ArmStrongNum(num3); // Q5 

    int num4;
    printf("Enter The No. To Check No. Perfect or Not\n");
    scanf("%d",&num4); 
     
    PerfectNum(num4);   // Q6


    IsFactorial();  // Q7

    int num5;
    printf("Enter The No. To Check No. Perfect or Not\n");
    scanf("%d",&num5); 
    IsStrong(num5);     // Q8

    int num6;
    printf("Enter The No. To Check No. Prime or Not\n");
    scanf("%d",&num6);
    IsPalindrome(); // Q9 

    int num7;
    printf("Enter The No. To Check No. Perfect or Not\n");
    scanf("%d",&num7);
    Add1stNumlstnum();// Q10
}


//  Q.1. Print numbers from 1 to 10.
int  NumPrint(  int num )
{

   while (num <=10)
    {
       
       printf("  %d ", num++);
    
    }
}

    //2. Print table for the given number.

int  PrintTable( int mynum )
    {
        int i= 1;
       
        while(i<=10)
        {
            printf("%d * %d = %d \n", mynum ,i , mynum*i);
            i++;
        }
    }

    // 3. Calculate sum of numbers in the given range.
// Consider range from 1 to 15

int  CalSum (int start ,int stop)
{
    int sum =0;
    while(start<=stop)
    {
        sum = sum+start;
        start++;
    }
      //printf("Addtion of this range is  %d \n\n1 ", sum);
      return sum ;

}

//Q 4 .  Check number is prime or not.
int PrimeNum(int num2)
{
    int i=2 , count=0 ;
    printf(" Enter The No. You want to check i.e. prime or not \n");
    scanf("%d",&num2);
    //printf("%d hiii\n",num);
    while(i<= num2)
    {
        if(num2%i==0)
        {
            count ++;
        }
        i++;
    }
        if (count == 0)
    {
        printf("Given No. i.e. %d is prime Number\n", num2);
    }
    else 
    {
        return num2;
    }

    


}


int ArmStrongNum (int num3)
{
          int sum =0,rem ,queb;
      int  org = num3;

while (num3>0)
{


    rem = num3%10;
    num3 = num3/10;
     queb  = rem* rem * rem ;
     sum = sum+ queb;

}

if(sum ==org)
    printf(" %d Is The Armstrong Number\n\n ",org);
    else
        printf(" %d Is Not  The Armstrong Number \n\n",org);
        return sum ;

}


//6. Check number is perfect or not.

void PerfectNum (int num4)
{
    int i =1, rem,sum =0;

while(i<num4)

{
    rem = num4 % i;

    if(rem == 0)
    {
        sum = sum + i;

    }
    i++;
}
    if(num4 == sum )
    {
        printf("The Given No. %d is Perfect \n\n",num4);
    }
    else 
    {
            return num4;
    }          
    
    

}

//  Q7. Find factorial of number.

int   IsFactorial  ()
{

int num ;
printf(" Entre the no. you want find Factorial \n");
scanf("%d", & num);

    int fact = 1,i=1;
    while(i<=num)
    {
        fact = fact * i;
        i ++;

    }
    printf(" Factorial of Given Number ( %d ) is %d\n\n", num,fact);
   // return fact ;
}

// 8. Check number is strong or not.


int IsStrong ( int num5)
{
       int sum =0,rem ;
    int org = num5;

    while(num5>0 )
    {

        rem = num5 %10;
        num5 = num5 /10;
        int fact=1;

        while(rem > 0)
        {
        fact = fact * rem ;
                
        rem--;

        }

        sum = sum + fact ;

    }
       if (org == sum)
    {
    printf(" Provided No. is Strong \n\n");
    }
    else

    {
        printf(" Provided No. is Not Strong No. \n");
        
    }
}

//Check the given number is palindrome or not?




int IsPalindrome(int num6)
{

    int rem , rev=0;
    printf("Entre te number that you want to check its palindrom or not \n");
    scanf("%d",&num6);
        int org =num6;

    while(num6)
    {

        rem = num6%10;
        rev = (rev * 10 )+rem;
        num6= num6/10;
        
    }
        printf(" rev = %d\n",rev);
        if (rev==org)
        printf(" Given Number  %d is a Palindrom Number\n",org);
        else
        printf(" Given Number  %d is NOT a Palindrom Number\n",org);

    
}


// Q10 Add the (first and last) digit of a given number
int Add1stNumlstnum (int num7)
{

    int first_di , last_di , sum  ;
   
    printf( " Provide No.  ");
    scanf("%d",&num7);
    last_di= num7%10;
       
       while (num7>10)
    {
        
        first_di= num7/10;
        num7 = num7/10;

       // last_di = num  ;
    }
    //printf(" num %d\n",num);
        printf("first digit  %d \n",first_di);
        printf("last digit  %d \n",last_di);



        sum = first_di + last_di;
        printf(" Addition Of First & Last Digit is  = %d ", sum);
}









