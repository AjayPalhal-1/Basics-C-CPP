
    //Write a program that prints numbers from 1 to 10 using a for loop.

    // int i ;

    // for(i=0; i<=10; i++) 
    // {
    //     printf(" %d \n", i);
    // }
    
    //Q2.

    //Write a program to find the sum of the first N natural numbers using a for loop. Assume N = 10.



    //  int main (){

    //     int num =10,i,sum=0 ;
    //     for (i=0; i<=num ; i++)
    //     {
    //         sum  = sum+i;

    //     }
    //                 printf(" Addition of first 10 natural No. is %d ", sum);

    //  }

// Q3 .,,....

  //  Write a program to calculate the factorial of a given number using a for loop. Assume the number is 5.


// int main ()
// {
//     int num =25, i, fact =1;
//     for(i=1;i <= num;i++)
//     {
//         fact = fact *i;


//     }
//     printf(" Factorial of %d is = %d\n",num, fact);



// }


// Q4... 
// Write a program to print the multiplication table of a given number using a for loop. Assume the number is 7.

// int main ()
// {

//     int num = 23, i , mul =0;
//     for (i=1; i<=10; i ++)
//     {

//         mul = num *i ;
//             printf(" %d * %d = %d \n\n", num , i , mul);

//     }
// }


//Q . 5   
//Write a program that prints all even numbers between 1 and 20 using a for loop.

int main ()
{
 int start = 1 , stop = 20 , i ,SUM_even  =0;
 for (start ; stop ; start ++)
 {
 SUM_even = SUM_even + start % 2 ==0;
 }
 printf(" %d", SUM_even );
 


}