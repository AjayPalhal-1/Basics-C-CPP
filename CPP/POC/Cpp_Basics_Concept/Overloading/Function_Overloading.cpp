#include<stdio.h>

struct calculator
{
    int num1;
    int num2;
    int num3;
    int num4;
    float num5;
    float num6;
    float num7;



    calculator()
    {
        printf("Default Constructor Is Called\n\n");
        this->num1=0;
        this->num2=0;

    }

  int  Add(int a ,int b)
    {
       this->num1=a;
       this->num2=b;
       return  printf("Addition Of 2 No. Is %d \n\n",a+b);
    }

    int  Add(int a ,int b,int c)
    {
       this->num1=a;
       this->num2=b;
       this->num3=c;
       return  printf("Addition Of 3 No. Is %d \n\n",a+b+c);
    }

     int  Add(int a ,int b,int c,int d)
    {
       this->num1=a;
       this->num2=b;
       this->num3=c;
       this->num4=d;

       return  printf("Addition Of 4 No. Is %d \n\n",a+b+c+d);
    }

      int  Sub(int a ,int b)
    {
       this->num1=a;
       this->num2=b;
      

       return  printf("Substraction Of 2 No. Is %d \n\n",a-b);
    }
       int  Sub(int a ,int b,int c)
    {
       this->num1=a;
       this->num2=b;
       this->num3=c;
      

       return  printf("Substraction Of 3 No. Is %d \n\n",a-b-c);
    }

    int  mul(int a ,int b,int c)
    {
       this->num1=a;
       this->num2=b;
       this->num3=c;
      

       return  printf("Multiplication Of 3 No. Is %d \n\n",a*b*c);
    }

    int  mul(int a ,int b)
    {
       this->num1=a;
       this->num2=b;
      

       return  printf("Multiplication Of 2 No. Is %d \n\n",a*b);
    }


    int  mul(int a ,int b,int c,int d)
    {
       this->num1=a;
       this->num2=b;
       this->num3=c;
       this->num4=d;

      

       return  printf("Multiplication Of 4 No. Is %d \n\n",a*b*c*d);
    }

       float  div(float a  ,float b)
    {
       this->num5=a;
       this->num6=b;
      

       return  printf("Division Of 2 No. Is %f \n\n",a/b);
    }
      float div(float a,  float b,float c)
    {
       this->num5=a;
       this->num6=b;
       this->num7=c;
      

       return  printf("Division Of 3 No. Is %f \n\n",b/a/c);
    }

};


int main()
{
    calculator c1,c2,c3;
    c1.Add(10,20,30);
    c1.Add(10,20);
    c1.Add(10,20,30,40); // Add function Overloading 
    c1.Sub(20,10);
    c1.Sub(20,10,5);    // Sub Function Overloading 
    c2.mul(1,2);
    c2.mul(1,2,3); // mul function Overloading
    c2.mul(1,2,3,4);
    c3.div(20,3);  // div fuction Overloading
    c3.div(20,3,2);
    c3.Add(10,20);

    

}
