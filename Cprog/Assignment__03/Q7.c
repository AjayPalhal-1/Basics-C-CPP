//  Q7. Find factorial of number.
int main ()
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
}