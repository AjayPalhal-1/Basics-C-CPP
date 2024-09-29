// 5. Accept the price from user. Ask the user if he is a student
// (user may say yes or no). If he is a student and he has
// purchased more than 500 than discount is 20% otherwise
// discount is 10%. But if he is not a student then if he has
// purchased more than 600 discount is 15% otherwise
// there is not discount.


void main()
{
float price = 5500,discount = 0,finalPrice;
char isStud='y';
if(isStud=='y' || 'Y')
{
if(price<=500){
discount = 0.1;
}
else
{
discount = 0.2;
}
}
else if(isStud=='n'|| 'N')
{
if(price >600){
discount = 0.15;
}
}
printf("Your purchased price is %f ",price);
printf("\nDiscount : %f %% \n final price : %f ",discount,price-(price * discount));
}