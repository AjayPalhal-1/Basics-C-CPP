#include<stdio.h>
    void  NumPrint(int*);    // Q1 
    void PrintTable (int*);  // Q2 
    void CalSum(int*,int*);       // Q3
    void  PrimeNum(int*);     // Q4 
    void  ArmStrongNum(int*); // Q5 
    void  PerfectNum(int*);   // Q6
    void  IsFactorial();  // Q7
    void  IsStrong(int*);     // Q8
    void  IsPalindrome(); // Q9 
    void  Add1stNumlstnum();// Q10

int main ()
{   
    int num = 1;
    NumPrint(&num);    // Q1 

    int mynum = 19;
    PrintTable(&mynum);  // Q2 


    int start , stop;
    printf(" Enter the starting range\n ");
    scanf("%d",& start);
    printf(" Enter the Stop range \n");
    scanf("%d",& stop );
    CalSum(&start, &stop);       // Q3

    int num2 = 90;
    PrimeNum(&num2);     // Q4 

    int num3;
    printf(" Enter The No. You want to check i.e. Armstrong  No. or not \n\n");
    scanf("%d",&num3);
    ArmStrongNum(&num3); // Q5 

    int num4;
    printf("Enter The No. To Check No. Perfect or Not\n");
    scanf("%d",&num4); 
    PerfectNum(&num4);   // Q6


    IsFactorial();  // Q7

    int num5;
    printf("Enter The No. To Check No. Strong or Not\n");
    scanf("%d",&num5); 
    IsStrong(&num5);     // Q8

    IsPalindrome(); // Q9 

    int num7;
    printf("Enter The No. To Check First and Last Digit Addition\n");
    scanf("%d",&num7);
    Add1stNumlstnum(&num7);  // Q10
}

//  Q.1. Print numbers from 1 to 10.
void  NumPrint(int* num)
{
    while (*num <= 10)
    {
        printf("  %d ", (*num)++);
    }
}

// Q.2. Print table for the given number.
void PrintTable(int* mynum)
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d \n", *mynum, i, (*mynum) * i);
        i++;
    }
}

// Q.3. Calculate sum of numbers in the given range.
void CalSum(int* start, int* stop)
{
    int sum = 0;
    while (*start <= *stop)
    {
        sum = sum + *start;
        (*start)++;
    }
    printf("Addition of this range is %d \n\n", sum);
}

// Q.4. Check number is prime or not.
void PrimeNum(int* num2)
{
    int i = 2, count = 0;
    while (i <= *num2)
    {
        if (*num2 % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 1)
    {
        printf("Given No. i.e. %d is a Prime Number\n", *num2);
    }
    else
    {
        printf("Given No. i.e. %d is Not a Prime Number\n\n", *num2);
    }
}

// Q.5. Check if a number is Armstrong or not.
void ArmStrongNum(int* num3)
{
    int sum = 0, rem, queb;
    int org = *num3;

    while (*num3 > 0)
    {
        rem = *num3 % 10;
        *num3 = *num3 / 10;
        queb = rem * rem * rem;
        sum += queb;
    }

    if (sum == org)
        printf("%d is an Armstrong Number\n\n", org);
    else
        printf("%d is Not an Armstrong Number\n\n", org);
}

// Q.6. Check if a number is perfect or not.
void PerfectNum(int* num4)
{
    int i = 1, rem, sum = 0;

    while (i < *num4)
    {
        rem = *num4 % i;

        if (rem == 0)
        {
            sum += i;
        }
        i++;
    }

    if (*num4 == sum)
    {
        printf("The Given No. %d is Perfect\n\n", *num4);
    }
    else
    {
        printf("The Given No. %d is Not Perfect\n\n", *num4);
    }
}

// Q.7. Find factorial of a number.
void IsFactorial()
{
    int num;
    printf("Enter the number you want to find the factorial of\n");
    scanf("%d",&num);

    double fact = 1, i = 2;
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of Given Number (%d) is %lf\n\n", num, fact);
}

// Q.8. Check if a number is strong or not.
void IsStrong(int* num5)
{
    int sum = 0, rem;
    int org = *num5;

    while (*num5 > 0)
    {
        rem = *num5 % 10;
        *num5 = *num5 / 10;
        int fact = 1;

        while (rem > 0)
        {
            fact *= rem;
            rem--;
        }
        sum += fact;
    }
    if (org == sum)
    {
        printf("Provided No. is Strong\n\n");
    }
    else
    {
        printf("Provided No. is Not a Strong No.\n");
    }
}

// Q.9. Check if a number is a palindrome.
void IsPalindrome()
{
    int num6, rem, rev = 0;
    printf("Enter the number that you want to check if it's a palindrome\n");
    scanf("%d", &num6);
    int org = num6;

    while (num6 > 0)
    {
        rem = num6 % 10;
        rev = (rev * 10) + rem;
        num6 = num6 / 10;
    }

    if (rev == org)
        printf("Given Number %d is a Palindrome\n", org);
    else
        printf("Given Number %d is NOT a Palindrome\n", org);
}

// Q.10. Add the first and last digits of a given number.
void Add1stNumlstnum(int* num7)
{
    int first_di, last_di, sum;
    last_di = *num7 % 10;

    while (*num7 >= 10)
    {
        *num7 = *num7 / 10;
    }
    first_di = *num7;

    sum = first_di + last_di;
    printf("Addition of First & Last Digit is = %d\n", sum);
}
