// 3. Calculate sum of numbers in the given range.
// Consider range from 1 to 15

int main ()
{
    int start , stop;
    printf(" Enter the starting range\n ");
    scanf("%d",& start);
        printf(" Enter the Stop range \n");
        scanf("%d",& stop );


    int sum =0;
    while(start<=stop)
    {
        sum = sum+start;
        start++;
    }
      printf("Addtion of this range is  %d \n\n1 ", sum);

}