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


typedef struct student 
{
    char Name [32];
    int RollNo ;
    int Marks ;

}student;

void  display (student *);
void store (student * ); 

int main ()
{

    student s1, s2,s3 ;
    store (&s1);
    printf("\n\n\n");
    display (&s1);
}

 void store (student * s)
 {  
        printf("\nEnter Name Student Detail to store  :\n");

    printf("\nEnter Name Student :\n");
    scanf("%s",s->Name);
    printf("Student Roll No :\n");
    scanf("%d",&s->RollNo);
    printf("Student Marks :\n");
    scanf("%d",&s->Marks);    

  }

//   void  display (student * s)
//   {
   
    
//      printf("Student Name is: %s\n",s->Name);
//      printf("Student Roll No is: %d\n",s->RollNo);
//      printf("Student Marks  is: %d \n\n\n",s->Marks);
    
    

//     // printf("Sizze of student array s1 = %d",sizeof(student));
// }

  void  display (student*  s)
  {
    
   
    printf("\nDiplaing  Student Detail   :\n");

     printf("Student Name is: %s\n",s->Name);
     printf("Student Roll No is: %d\n",s->RollNo);
     printf("Student Marks  is: %d \n\n\n",s->Marks);
    
    

    // printf("Sizze of student array s1 = %d",sizeof(student));
}