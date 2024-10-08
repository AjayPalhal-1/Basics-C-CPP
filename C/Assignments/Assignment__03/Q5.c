int main (){

  


    // rem1 = num%10;
    // num = num/10;
    // rem2 = num%10;
    // num  = num/10;
    // rem3 = num%10;
    // num = num/10;
    // int sum = rem1* rem1* rem1 + rem2 * rem2 * rem2 + rem3 * rem3 * rem3;
    // if(sum==org)
    // printf(" %d Is The Armstrong Number\n\n ",org);
    // else
    //     printf(" %d Is Not  The Armstrong Number \n\n",org);
      int num  ,sum =0,rem ,queb;
  
     printf(" Enter The No. You want to check i.e. Armstrong  No. or not \n\n");
     scanf("%d",&num);
      int  org = num;

while (num>0)
{


    rem = num%10;
    num = num/10;
     queb  = rem* rem * rem ;
     sum = sum+ queb;

    // printf("sum %d \n",sum);
  

    



}

if(sum ==org)
    printf(" %d Is The Armstrong Number\n\n ",org);
    else
        printf(" %d Is Not  The Armstrong Number \n\n",org);

}