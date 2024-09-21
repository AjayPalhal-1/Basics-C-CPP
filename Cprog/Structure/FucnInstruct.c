#include <stdio.h>

typedef struct student
{
    char Name[36];
    int RollNo;
    double MobNo;

} student;
student store();
student Disp(student);
int main()
{
    student s1, s2, s3, s4;
    s1 = store();
    s2 = store();
    s3 = store();
    s4 = store();
    Disp(s1);
    Disp(s2);
    Disp(s3);
    Disp(s4);

}

student store()
{
    student temp;
    printf("Enter the student name : \n");
    scanf("%s", &temp.Name);

    printf("Enter the student Roll No  : \n");
    scanf("%d", &temp.RollNo);

    printf("Enter the student Mo.No. : \n");
    scanf("%lf", &temp.MobNo);

    return temp;
};

 student Disp( student s1)
{
    printf("Student name : %s", s1.Name);
    printf("\n");
    printf("Student Roll No :%d", s1.RollNo);
    printf("\n");
    printf("Student Mo.No. : %lf", s1.MobNo);
    printf("\n");

};
