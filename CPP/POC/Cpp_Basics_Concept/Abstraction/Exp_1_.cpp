


#include<stdio.h>


typedef struct student 
{
    char Name [32];  // student also have Age , Location , Father name , Adhaar Id but 
    int RollNo ;     // just select what we need and other state / attributes just ignoring mean we do "ABSTRCTION here "
    int Marks ;
}student;

void  Disp (student * );
void store (student *  ); 

int main ()
{

    student s1, s2,s3 ;
     store (&s1);
    display (&s1);
}

 void store (student * s)
 {  
    printf("\nEnter Name Student :\n");
    scanf("%s",s->Name);
    printf("Student Roll No :\n");
    scanf("%d",&s->RollNo);
    printf("Student Marks :\n");
    scanf("%d",&s->Marks);    

  }

  void  display (student * s)
  {
   
    
     printf("Student Name is: %s\n",s->Name);
     printf("Student Roll No is: %d\n",s->RollNo);
     printf("Student Marks  is: %d \n\n\n",s->Marks);
    
    

    // printf("Sizze of student array s1 = %d",sizeof(student));
}