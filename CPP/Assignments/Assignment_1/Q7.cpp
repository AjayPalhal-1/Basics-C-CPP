// 7 Time (hour, min, sec)


#include<stdio.h>

struct Time 
{
    int hour ;
    int min ;
    int sec ;

    Time()
    {

        printf("Default Constructor Is called\n");
        this->hour=0;
        this->min=0;
        this->sec=0;

    }


    Time(int h,int m, int s)
    {

        printf("3 Param Vala  Constructor Is called\n");
        this->hour=h;
        this->min=m;
        this->sec=s;

    }
    
    int getHour()
    {
        return this->hour;
    }

    int getMin()
    {
        return this->min;

    }
    int getSec()
    {
        return this->sec;

    }

};

int main()
{
    Time T1,T2(15,5,30);
    printf("\n\nValues Of Object T1 \n");
    printf("Hour = %d\n",T1.getHour());
    printf("Min = %d\n",T1.getMin());
    printf("Sec = %d\n\n\n",T1.getSec());

    printf("Values Of Object T2 \n");
    printf("Hour = %d\n",T2.getHour());
    printf("Min = %d\n",T2.getMin());
    printf("Sec = %d\n\n",T2.getSec());




}
