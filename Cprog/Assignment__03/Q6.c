//6. Check number is perfect or not.

int main ()
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

