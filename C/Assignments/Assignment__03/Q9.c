//Check the given number is palindrome or not?




int main ()
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
        printf(" Given Number  %d is a Palindrom Number \n  ",org);
        else
                printf(" Given Number  %d is NOT a Palindrom Number \n ",org);

    
}