//Using While  

int main (){

    int Esum=0,Osum=0, Start , Stop ;
    printf(" provide the starting No. \n") ;
    scanf("%d",&Start);

     printf (" provide the Ending  No. \n") ;
    scanf("%d",&Stop);

    int i =  Start ;

    printf(" start no . is = %d \n",Start);
        printf(" Stop no . is = %d \n",Stop );


   for (i = Start ; i<= Stop ; i ++)
   {

   

       if(i % 2==0)
       {
         Esum = Esum + i;
       }
       else
      {
         Osum = Osum+i; 
      }
   }
       
    printf(" Sum Of Even No. in Given Range is  = %d\n",Esum);
        printf(" Sum Of Odd No. in Given Range is = %d \n",Osum);

}