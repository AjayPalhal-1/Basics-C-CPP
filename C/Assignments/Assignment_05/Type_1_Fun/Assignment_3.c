#include<stdio.h>
    int  NumPrint ();    // Q1 
    int  PrintTable ();  // Q2 
    int  CalSum();       // Q3
    int  PrimeNum();     // Q4 
    int  ArmStrongNum(); // Q5 
    int  PerfectNum();   // Q6
    int  IsFactorial();  // Q7
    int  IsStrong();     // Q8
    int  IsPalindrome(); // Q9 
    int  Add1stNumlstnum();// Q10

int main ()
{
    printf("Number Printing : %d \n", NumPrint());    // Q1 
    printf("Table Printing : %d \n",PrintTable());  // Q2 
    printf("Calculated Sum Is = %d \n",CalSum());       // Q3
    PrimeNum();     // Q4 

    printf("Aremstrong No. Is = %d \n",ArmStrongNum()); // Q5 
    PerfectNum();   // Q6
    printf("Factorial Of Num : %d \n",IsFactorial());  // Q7
    printf("Strong No Is : %d \n",IsStrong());     // Q8
    printf("Palindrom Num Is : %d \n",IsPalindrome()); // Q9 
    printf("Sum Of 1st and Last Digit Is : %d \n",Add1stNumlstnum());// Q10
}


//  Q.1. Print numbers from 1 to 10.
int  NumPrint ()
{

    int num = 1;
    while (num <=10)
    {
      printf("%d ", num++);
    
    }
}

    //2. Print table for the given number.

    int PrintTable  ()
    {
        int i= 1;
        int num = 19;
        while(i<=10)
        {
            printf("%d * %d = %d \n", num ,i , num*i);
            i++;
        }
    }

    // 3. Calculate sum of numbers in the given range.
// Consider range from 1 to 15

int CalSum ()
{
    int start , stop;
    printf(" Enter the starting range\n ");
    scanf("%d",& start);
        printf(" Enter the Stop range \n");
        scanf("%d",& stop );


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
int PrimeNum()
{
    int num, i=2 , count=0 ;
    printf(" Enter The No. You want to check i.e. prime or not \n");
    scanf("%d",&num);
    //printf("%d hiii\n",num);
    while(i*i<num)
    {
        if(num%i==0)
        {
            count ++;

        }
        i++;
    }
        if (count == 0)
    {
        printf("Given No. i.e. %d is prime Number\n\n", num);
    }
    else 
            printf(" Given No. i.e. %d is Not  prime Number\n\n", num);

    //return num;


}


int  ArmStrongNum (){

      int num  ,sum =0,rem ,queb;
  
     printf(" Enter The No. You want to check i.e. Armstrong  No. or not \n\n");
     scanf("%d",&num);
      int  org = num;

while (num>0)
{


    rem = num%10;
    num = num/10;
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

int PerfectNum ()
{
    int i =1, num = 7, rem,sum =0;

while(i<num)

{
    rem = num % i;

    if(rem == 0)
    {
        sum = sum + i;

    }
    i++;
}
    if(num == sum )
    {
        printf(" The Given No. %d is Perfect \n\n", num);
    }
    else {
                printf(" The Given No. %d Not  Perfect\n\n  ", num );

    }

}

//  Q7. Find factorial of number.

int  IsFactorial  ()
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
    return fact ;
}

// 8. Check number is strong or not.


int  IsStrong ()
{
    int num = 145;
    int sum =0,rem ;
    int org = num ;

    while(num>0 )
    {

        rem = num %10;
        num = num /10;
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
        printf(" Provided No. is Not Strong No. \n");
        
}

//Check the given number is palindrome or not?




int IsPalindrome()
{

    int num , rem , rev=0;
    printf("Entre te number that you want to check its palindrom or not \n");
    scanf("%d",&num);
        int org =num;

    while(num)
    {

        rem = num%10;
        rev = (rev * 10 )+rem;
        num= num/10;
        
    }
        printf(" rev = %d\n",rev);
        if (rev==org)
        printf("Given Number  %d is a Palindrom Number \n  ",org);
        else
                printf(" Given Number  %d is NOT a Palindrom Number \n ",org);

    
}


// Q10 Add the (first and last) digit of a given number
int Add1stNumlstnum ()
{

    int first_di , last_di , sum  ;
    int num ;
    printf( " Provide No.  ");
    scanf("%d",&num);
    last_di= num%10;
       
       while (num>10)
    {
        
        first_di= num/10;
        num = num/10;

       // last_di = num  ;
    }
    //printf(" num %d\n",num);
        printf(" first digit  %d \n",first_di);
        printf(" last digit  %d \n",last_di);



        sum = first_di + last_di;
        printf(" Addition Of First & Last Digit is  = %d ", sum);
}









