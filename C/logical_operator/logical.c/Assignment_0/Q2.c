// 2. Write a program to calculate the percentage of student based on marks of
// any 5 subjects.

int main (){

    int sub1 = 40 ,sub2 = 60 ,sub3=50,sub4=73,sub5=35;
    float  obtained_mark = sub1+ sub2+sub3+sub4+sub5;
    double  per = (obtained_mark/500)*100;
    printf("%lf",per);
}