// Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to
// enter his choice, then based on that perform the desired operations.


void main(){
int num=102;
printf("*********MENU************\n 1)") ;
printf("is number positive or negative \n 2)");
printf("  EVEN ODD \n3) ");
int choice=3;
if(choice==1){
if(num<1){
printf("num is negative");
}else if(num>1){
printf("num is positive");
}else{
printf("num is zero");
}
}else if(choice==2){
if(num%2==0){
printf("num is Even ");
}else{
printf("num is odd");
}
}else if(choice==3){
int rem,rev=0,n=num;
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
rem=n%10;
rev=(rev*10)+rem;
printf("Reverse number of %d is %d\n\n",num,rev);
}
}