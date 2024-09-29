// Q3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number
int main (){

    int rev =0;
    int num= 478;
    int rem1 = num % 10;
    int que1 = num/10;
    rev = (rev*10)+ rem1 ;
    printf("rem1 %d que1 %d rev %d\n\n ", rem1,que1,rev);
    int rem2 = que1 %10;
    int que2 = que1 /10 ;
    rev = (rev *10 )+ rem2 ;
        rev = (rev *10 )+ que2 ;

        printf("rem2 %d que2 %d rev %d\n\n ", rem2,que2,rev);
        int sum = rem1 + rem2 + que2 ;
        printf(" Addition of 3 Digit (4+7+8) is %d\n\n",sum);
        printf(" Reversed No Of 478 is %d\n\n\n ", rev);


}