//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and
// 30% respectively.

int main ()
{
    int basic =   55500;
    int totalSal =0;
    int da , ta ,hra;



    if  ( basic <= 5000 ) 
    {
         da = basic * 0.10;
        printf("10 percent  of %d is %d \n ", basic, da);
         ta = basic * 0.20;
                printf("20 percent  of %d is %d \n ", basic, ta);

        hra = basic * 0.25;
                printf("25 percent  of %d is %d \n ",basic, hra);

        // totalSal = da +ta + hra+ basic ;
        // printf(" The total salary is %d \n", totalSal);
   }
   else
   {
      da = basic * 0.15;
                     printf("15 percent  of %d is %d \n ",basic, da);

         ta = basic * 0.25;
                        printf("25 percent  of %d is %d \n ",basic, ta);

         hra = basic * 0.30;
                                printf("30 percent  of %d is %d \n ",basic, hra);

        // totalSal = da +ta + hra+ basic ;

        // printf(" The total salary is %d \n ", totalSal);
        

   }     
        printf("da = ,%d , ta= %d , hra = %d , basic %d \n\n\n ", da,ta,hra,basic);
        totalSal = da + ta + hra + basic ;

        printf(" The total salary is %d \n \n ", totalSal);
}