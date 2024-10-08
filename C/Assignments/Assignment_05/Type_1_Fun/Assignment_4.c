

#include <stdio.h>
    void ListArmstrong();   // Q1 
    void IsPrime();         // Q2
    void IsPerfect();       // Q3
    void IsStrong();        // Q4 
    void FiboSer ();        // Q5

int main ()
{

    ListArmstrong();   // Q1 
    IsPrime();         // Q2
    IsPerfect();       // Q3
    IsStrong();        // Q4 
    FiboSer ();        // Q5

}

void ListArmstrong () 
{
    int start, stop, i, sum, rem, qnt, queb;

    printf("Enter the Start No.\n");
    scanf("%d", &start);
    printf("Enter the Stop No.\n");
    scanf("%d", &stop);

    // int  org = start;

    for(i = start; i <= stop; i++)
    {
        int j ;
        sum = 0;
      for (j= i; j >0; j= j/10)
      {       
        rem = j % 10;
        // qnt = i / 10;
        // queb = rem * rem * rem;
        sum = sum + (rem*rem*rem);
      }
    //   printf("Exit val of j = %d",j);
      if (sum==i)
      {
        printf("%d is Armstrong \n",i);
      }          
    }
        
    return 0; // Add a return statement to indicate successful execution
}



//Q 2  .  Check number is prime or not.
void IsPrime()
{
    int num1, num2,  j=2,count=0 ;
    printf(" Enter The  Start Range of No.  that You want to check i.e. prime or not \n");
    scanf("%d",&num1);
        printf(" Enter The  Ending  Range  :  \n");
            scanf("%d",&num2);
           int  i=num1 ;


    //printf("%d hiii\n",num);
    while(i<= num2)
    {    count =0;
    j=2;
        while(j< i)
        {  
          if(i%j==0)
         {
            count ++;
           // break;

         }
        // printf("  i =  %d \n", i);
                //  printf("  j =  %d \n", j);

          j++;
          
          
        }
        if (count == 0)
             {
                      printf("  %d\n ", i);
             }

          i++;

         //1
         // printf(" outer while j =  %d \n", j);
             
    }
     
    //1else 
          //  printf(" Given No. i.e. %d is Not  prime Number\n\n", num);

    return 0;


}



// check perfect number in the given range 1 to n?

void IsPerfect()
{
    int start, end;
    printf("Enter The range start :");
    scanf("%d", &start);
    printf("Enter The range end :");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        int sumOfDivisor = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sumOfDivisor += j;
            }
        }

        if (sumOfDivisor == i && i != 0)
        {
            printf("Number %d is perfect number \n", i);
        }
    }
}
// Q4 check strong number in the given range 1 to n?


void IsStrong()
{
    int start, end;
    printf("Enter The range start :");
    scanf("%d", &start);
    printf("Enter The range end :");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        int sumOfFactorials = 0;
        int temp = i;

        while (temp > 0)
        {
            int digit = temp % 10;
            int factorial = 1;

            for (int j = 1; j <= digit; j++)
            {
                factorial *= j;
            }

            sumOfFactorials += factorial;
            temp /= 10;
        }

        if (sumOfFactorials == i)
        {
            printf("Number %d is a strong number \n", i);
        }
    }
}


void FiboSer()
{

    int n, fib1 = 0, fib2 = 1, fibNext;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fib1);
        fibNext = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibNext;
    }
    printf("\n");
}









