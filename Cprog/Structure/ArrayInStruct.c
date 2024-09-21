#include<stdio.h>


typedef struct student 
{
    char Name [32];
    int RollNo ;
    int Marks ;
}student;

void  Disp (student * );
student store (student *  ); 

int main ()
{

    // student s1, s2,s3 
    student s[5] ;
    store (s );
    display (s);
}

 student store (student * s )
 {
    for(int i=1 ; i<=5 ;i++)
    {
    printf("Enter Student %d Name\n",i);
    // scanf("%s",s[i].Name);
     fflush(stdin);
     gets(s[i].Name);

    printf("Enter Student %d Roll no \n",i);
    scanf("%d",&s[i].RollNo);
   

    printf("Enter Student %d Marks \n",i);
    scanf("%d",&s[i].Marks);  
    }  
    

  }

  void  display (student * s )
  {
    for(int i=1;i<=5;i++)
    {
     printf("Student %d Name is: %s\n",i,s[i].Name);
     printf("Student %d Roll No is: %d\n",i,s[i].RollNo);
     printf("Student %d Marks  is: %d \n",i,s[i].Marks);
    }
    

    // printf("Sizze of student array s1 = %d",sizeof(student));
}