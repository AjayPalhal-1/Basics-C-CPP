// Find the price of item when discount is given (specify different discount based on
// price)


int main ()
{
int price =  7001;
int Discount ; 
int final_Price ;
if (price <= 1000 )
{
Discount = price * 0.2;
printf(" You willl get 20%% Discount\n ");

}
else if (price <= 5000 )
{
Discount = price * 0.3;
printf(" You willl get 30%% Discount\n ");
}
else 
 {
Discount = price * 0.5;
printf(" You willl get 50%% Discount  %d\n",Discount);

}
final_Price = price - Discount;
printf(" Your Final bill is  %d INR after getting Discount\n",final_Price);

}
