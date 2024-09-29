// 


int main ()
{
    int num, rem1 , rem2  ,i;
    printf( " Give Number ");
    scanf("%d",&num);
    for (i=1; i<=2; i++)
    {
        int rem1 = num % 10 ; 
      num=num/10;
         int rem2 = num % 10 ; 
         printf("rem1 - %d rem2 - %d \n",rem1,rem2);
        
    }
    printf(" Last 2 digit is = %d, %d ",rem1,rem2);





}