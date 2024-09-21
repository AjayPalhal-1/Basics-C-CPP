#include <stdio.h>

typedef struct student
{
    char Name[32];
    int RollNo;
    int Marks;

} student;

student storeS()
{
    student temp;
    printf("Enter Student Name\n");
    // scanf("%s",s[i].Name);
    fflush(stdin);
    gets(temp.Name);

    printf("Enter Student Roll no \n");
    scanf("%d", &temp.RollNo);

    printf("Enter Student Marks \n");
    scanf("%d", &temp.Marks);

    return temp;
}

void display(student s)
{
    printf("Student  Name is: %s\n", s.Name);
    printf("Student  Roll No is: %d\n", s.RollNo);
    printf("Student  Marks  is: %d \n", s.Marks);
}
int main()
{

    student s;
    s = storeS();

    display(s);
}