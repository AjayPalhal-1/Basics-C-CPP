#include<stdio.h>

struct student 
{
    int rollNo;
    int marks;
    char name[10];

    void setRollNo(int mrk)
    {
        this->marks=mrk;
        printf("Sucess fully done meri jann\n\n");

    }

    int getRollNo()
    {
    //    printf(" Mark = %d\n\n\n", this->marks);
    return this->marks;

    }

};

int main()
{

student s1 ,s2,s3;

s1.setRollNo(10);
printf("Mark S1 = %d\n\n",s1.getRollNo());
s2.setRollNo(20);
printf("Mark S2 = %d\n\n",s2.getRollNo());



}

