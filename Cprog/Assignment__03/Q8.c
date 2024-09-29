// 8. Check number is strong or not.


int main ()
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