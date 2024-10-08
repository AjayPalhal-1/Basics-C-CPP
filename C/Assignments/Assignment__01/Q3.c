// Accept a 3 digit number from user and find the sum of the digits and also
// reverse the number

int main (){
    int num=789;
    int rev = 0;
    int rem1 = num%10;
    int que1 = num/10;
    rev = (rev *10)+rem1 ;
    printf(" Reversed No. %d \n",rev);
    int rem2 = que1 %10;
    int que2 = que1 / 10;
    rev = (rev *10)+rem2 ;
    printf(" Reversed No. %d \n",rev);
    int rem3 = que2 % 10 ;
    int que3 = que2 / 10;
    rev = (rev *10)+rem3 ;
    printf(" Reversed No. %d \n",rev);
    int sum = rem1+rem2+rem3+que3;
    printf(" Sum Of three No. are %d \n\n\n\n",sum);



    }