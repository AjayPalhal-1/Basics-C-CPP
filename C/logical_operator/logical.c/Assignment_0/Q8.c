
// 8. Assign two number and swap it using third variable

int main(){
    int num = 12 ;
    int num2 = 25;
        printf(" Orignal no. are num1: %d , num2: %d \n", num, num2);

    int swap = num;
    num = num2;
    num2= swap ;
    printf("New swaped no. are num1 : %d ,  num2 :%d \n ", num, num2);
}