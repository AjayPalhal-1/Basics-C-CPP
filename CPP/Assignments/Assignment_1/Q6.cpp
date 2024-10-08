// 6 Date (date, month, year)


#include<stdio.h>

struct Date 
{
    int date ;
    int month;
    int year ;

    Date()
    {
        printf("Default Constructor is Called \n");
        this->date=0;
        this->month=0;
        this->year=0;
    }

    Date(int date , int month,int year)
    {
     printf("Parameter Constructor is Called \n\n");
     this->date=date;
     this->month=month;
     this->year=year;
    }

    void setDate(int date)
    {
      this->date=date;

    }

    void setMonth(int month)
    {
        this->month=month;
    }

    void setYear(int year)
    {
        this->year=year;
    }

    int getDate()
    {
        return this->date;
    }
      int getMonth()
    {
        return this->month;
    }
      int getYear()
    {
        return this->year;
    }

     void disp()
 {
    printf("\n:: Outputs Using Display Are ::\n");
    printf("Date  : %d\n",this->date);
    printf("Month  : %d\n",this->month);
    printf("Year  : %d\n\n\n",this->year);
 }


};

int main ()
{
  Date D1 ,D2(2,10,2024);
  D1.disp();
  D2.disp();
  printf("\n\nOutput Using Getter of Object D1\n");
  printf("Date : %d \n",D1.getDate());
  printf("Month : %d \n",D1.getMonth());
  printf("Year: : %d \n",D1.getYear());

  printf("\n\nOutput Using Getter of Object D2\n");
  printf("Date : %d \n",D2.getDate());
  printf("Month : %d \n",D2.getMonth());
  printf("Year: : %d \n",D2.getYear());
  
}