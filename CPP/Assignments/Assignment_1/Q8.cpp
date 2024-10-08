// 8 Distance ( feet, inch)
#include<stdio.h>

struct Distance
{
    int feet;
    int inch;

    Distance()
    {
        this->feet=0;
        this->inch=0;
    }
      Distance(int f ,int inch)
    {
        this->feet=f;
        this->inch=inch;
    }

    int getFeet()
    {
        return this->feet;
    }

     int getInch()
    {
        return this->inch;
    }
};

int main()
{
    Distance D1(10,30),D2;

    printf("Output of D1 Object \n");
    printf("Feet = %d\n",D1.getFeet());
    printf("Inches = %d\n\n",D1.getInch());

    printf("Output of D2 Object \n");
    printf("Feet = %d\n",D2.getFeet());
    printf("Inches = %d\n\n",D2.getInch());

    




}