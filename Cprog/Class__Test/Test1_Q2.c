// WAP for Leap year 

int main ()
{

    int year ;
    printf( " Entre year that you Want to check Leap \n ");
    scanf("%d",&year);
    int rem = year % 4;

    printf(" rem = %d \n ",rem);
    if(rem==0)
    {
        printf(" %d is Leap year ", year);
    }
    else 
            printf(" %d is  Not Leap year ", year);


}


