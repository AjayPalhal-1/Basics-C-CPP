#include<stdio.h>


typedef struct student 
{
    char Name [32];
    int RollNo ;
    int Marks ;
}student;

void  Disp (student *,int* );
void store (student * ,int* ); 

int main ()
{

    // student s1, s2,s3 
    int size = 2;
    student s[size] ;
    store (s,size );
    display (s,size);
}

 void store (student * s ,int* size)
 {
    for(int i=0 ; i<size ;i++)
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

  void  display (student * s,int* size )
  {
    for(int i=0;i<size;i++)
    {
     printf("Student %d Name is: %s\n",i,s[i].Name);
     printf("Student %d Roll No is: %d\n",i,s[i].RollNo);
     printf("Student %d Marks  is: %d \n\n\n",i,s[i].Marks);
    }
    

    // printf("Sizze of student array s1 = %d",sizeof(student));
}