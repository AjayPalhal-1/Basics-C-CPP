#include<stdio.h>

int DiscountCal(int*);               // Q1
int BigNumCal(int*, int*, int*);      // Q2
int Calculator(int*, int*);           // Q3
int menu();                           // Q4
int DiscountForStud();                // Q5

int main()
{
    int price = 7001;
    printf("Total Discount Is = %d\n", DiscountCal(&price));      // Q1

    int A = 100, B = 50, C = 53;
    printf("Biggest No. Is = %d\n", BigNumCal(&A, &B, &C));       // Q2

    int num1, num2;
    printf("Enter Your Number 1 :\n");
    scanf("%d", &num1);
    printf("Enter Your Number 2 :\n");
    scanf("%d", &num2);
    printf("Calculated Ans Is = %d\n", Calculator(&num1, &num2));  // Q3
    
    printf("Menu Op = %d\n", menu());                             // Q4
    printf("Discount For Student Is = %d\n", DiscountForStud());  // Q5
}

// Q1: Find the price of item when discount is given (specify different discount based on price)
int DiscountCal(int* price)
{
    int Discount;
    int final_Price;
    if (*price <= 1000)
    {
        Discount = *price * 0.2;
        printf("You will get 20%% Discount\n");
    }
    else if (*price <= 5000)
    {
        Discount = *price * 0.3;
        printf("You will get 30%% Discount\n");
    }
    else
    {
        Discount = *price * 0.5;
    }
    final_Price = *price - Discount;
    printf("Your Final bill is %d INR after getting Discount\n", final_Price);
    return final_Price;
}

// Q2: Find the greatest of three numbers using nested if-else
int BigNumCal(int* A, int* B, int* C)
{
    if (*A > *B)
    {
        if (*A > *C)
        {
            return *A;
        }
        else
        {
            return *C;
        }
    }
    else
    {
        if (*B > *C)
        {
            return *B;
        }
        else
        {
            return *C;
        }
    }
}

// Q3: Perform desired operations based on user input (addition, subtraction, etc.)
int Calculator(int* num1, int* num2)
{
    int res, choice;
    printf("For Addition Press 1\nFor Subtraction Press 2\nFor Multiplication Press 3\n");
    printf("For Division Press 4\nFor Modulus Press 5\n");
    
    printf("Enter Your Choice\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        res = *num1 + *num2;
        printf("Addition Of These Two Numbers = %d\n", res);
        return res;
    }
    else if (choice == 2)
    {
        res = *num1 - *num2;
        printf("Subtraction Of These Two Numbers = %d\n", res);
        return res;
    }
    else if (choice == 3)
    {
        res = *num1 * *num2;
        printf("Multiplication Of These Two Numbers = %d\n", res);
        return res;
    }
    else if (choice == 4)
    {
        res = *num1 / *num2;
        printf("Division Of These Two Numbers = %d\n", res);
        return res;
    }
    else if (choice == 5)
    {
        res = *num1 % *num2;
        printf("Modulus Of These Two Numbers = %d\n", res);
        return res;
    }
    return 0;
}

// Q4: Display a menu to the user and perform the desired operations
int menu()
{
    int num = 102;
    printf("*********MENU************\n 1)");
    printf("Is number positive or negative \n 2)");
    printf("EVEN ODD \n3)");
    int choice = 3;

    if (choice == 1)
    {
        if (num < 1)
        {
            printf("Number is negative\n");
        }
        else if (num > 1)
        {
            printf("Number is positive\n");
        }
        else
        {
            printf("Number is zero\n");
        }
    }
    else if (choice == 2)
    {
        if (num % 2 == 0)
        {
            printf("Number is Even\n");
        }
        else
        {
            printf("Number is Odd\n");
        }
    }
    else if (choice == 3)
    {
        int rem, rev = 0, n = num;
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
        rem = n % 10;
        rev = (rev * 10) + rem;
        return rev;
    }
    return 0;
}

// Q5: Calculate discount based on whether the user is a student
int DiscountForStud()
{
    float price = 5500, discount = 0, finalPrice;
    char isStud = 'y';

    if (isStud == 'y' || isStud == 'Y')
    {
        if (price <= 500)
        {
            discount = 0.1;
        }
        else
        {
            discount = 0.2;
        }
    }
    else if (isStud == 'n' || isStud == 'N')
    {
        if (price > 600)
        {
            discount = 0.15;
        }
    }

    printf("Your purchased price is %f\n", price);
    return (price - (price * discount));
}
