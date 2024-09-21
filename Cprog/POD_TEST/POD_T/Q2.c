// Dixcount

#include <stdio.h>

int main()
{
    int discount, balance, total;
    printf(" Enetr Your balenc ");
    scanf("%d", &balance);

    if (balance <= 5000)
    {
        printf(" Yoy got 5%% Discount \n");
        discount = 0.05 * balance;
        total = balance - discount;
        printf(" You Have to pay %d after discount ", total);
    }
    else if (balance <= 10000)
    {
        printf(" Yoy got 10%% Discount \n");
        discount = 0.10 * balance;

        total = balance - discount;
        printf(" You Have to pay %d after discount ", total);
    }
}