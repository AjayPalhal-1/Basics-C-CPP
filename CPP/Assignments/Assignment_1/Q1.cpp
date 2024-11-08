// Assignment 13
// Structure

// 1 Student (rollNo, name, marks)
// 2 Employee (id, name, salary)
// 3 Admin (id, name, salary, allowance)
// 4 HR (id, name, salary, commission)
// 5 SalesManager (id, name, salary, incentive, target)
// 6 Date (date, month, year)
// 7 Time (hour, min, sec)
// 8 Distance ( feet, inch)
// 9 Complex (real, imaginary)
// 10 Product (id, name, quantity, price)


// In void main()
// Using function (store , display) -> pass by value
// -> pass by address (array)
// -> pass one structure variable to function by address


#include<stdio.h>
#include<string.h>



typedef struct student 
{
    int rollN0;
    char name[10];
    int marks ;

    student()//Default constructor
    {
        this->marks=1;
        strcpy(this->name,"abc");
        this->rollN0=0;

        printf("Default Constructor : \n");
    }

    student (char* nav , int rollno ,int mark)//
    {
        strcpy(this->name,nav);
        this->rollN0=rollno;
        this->marks=mark;

        printf("Parametrize  Constructor called : \n");


    }
      student (char* nav )//
    {
        strcpy(this->name,nav);
        // this->rollN0=rollno;
        // this->marks=mark;

        printf("Parametrize  Constructor called Only One Value : \n");


    }

    // void setRollNo(int r)
    // {
    //     this->rollN0=r;
    // }

    // void setMarks(int mrk)
    // {
    //     this->marks=mrk;
    // }

    // void setName(char* nav)
    // {
    //     strcpy(this->name,nav);
    // }

    char* getName()
    {
    return ((this->name));
    }

    int getRollNo()
    {
        return this->rollN0;

    }
    int getmarks()
    {
        return this->marks;
    }


    void disp(student s)
{    printf("Student Name : %s\n",this->name);
    printf("Student Roll No : %d\n",this->rollN0);
    printf("Student Marks : %d\n\n\n",this->marks);

}

    
} student ;




int main ()
{
    student s1("AJAY",90,99) ,s2("ANKUSH",35,98),s3("Pravin") ,s4;
    int mrk,r;
    char nav[50];
// Outputs

    printf("\n\n:: Output Using Getter For S1 ::\n\n");

    printf("Student Name : %s",s1.getName());
    printf("\nStudent Marks : %d",s1.getmarks());
    printf("\nStudent Roll Number : %d\n\n\n\n",s1.getRollNo());


    printf(":** Displays Behaviour After Setting values Of S1 :**\n");
    s1.disp(s1);


    printf("\n\n::** Output Using Getter For S2 ::**\n\n");

    printf("Student Name : %s",s2.getName());
    printf("\nStudent Marks : %d",s2.getmarks());
    printf("\nStudent Roll Number : %d\n\n\n\n",s2.getRollNo());


    printf(": Displays Behaviour After Setting values Of S2 :\n");
    s2.disp(s2);


    printf("\n\n:: Output Using Getter For S3 ::\n\n");

    printf("Student Name : %s",s3.getName());
    
    printf(":** Displays Behaviour After Setting values Of S3 :**\n");
    s3.disp(s3);

    s4.disp(s4);

    return 1;
}