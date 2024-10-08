

//Q 4 .  Check number is prime or not.
#include<stdio.h>
int main()
{
    int num1, num2,  j=2,count=0 ;
    printf("Enter The  Start Range of No. that You want to check i.e. prime or not \n");
    scanf("%d",&num1);
        printf("Enter The  Ending  Range  :  \n");
            scanf("%d",&num2);
           int  i=num1 ;


    //printf("%d hiii\n",num);
              printf("Prime No . Are : 1\n\n\n");

    while(i<= num2)
    { 
      if(i==1)
    {
        i++;
      continue;
    
    }   
      count =0;
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
                      printf(" %d ", i);
             }

          i++;

         //1
         // printf(" outer while j =  %d \n", j);
             
    }
     
    //1else 
          //  printf(" Given No. i.e. %d is Not  prime Number\n\n", num);

    return 0;


}







