//2. Write a program to find greatest of three numbers using nested if-else.

int main ()
{
int A= 100 , B= 50 , C = 53;
 if(A>B)
 {
    if (A>C)
    {
        printf(" A = %d is Gratest Number\n ",A);

    }
    else
    {
        printf(" C = %d Gratest Number \n",C);
    }
 }
    else 
    {
         if (B>C)
      {
        if (B>A) 
        printf(" B= %d is Gratest Number \n",B);
      }

       
    else
    {
        printf(" C = %d Gratest Number \n",C);

    }

 }


}
 