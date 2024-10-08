// Add the (first and last) digit of a given number
int main ()
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