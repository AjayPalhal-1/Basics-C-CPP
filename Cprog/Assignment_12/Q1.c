// Assignment 12
// Malloc
// Que : Create array using malloc in Assignment 8




// Passing array to function
// 1. Do all the questions of ASS_7 using function

// Q1: 1. Find minimum and maximum number in array.

#include <stdio.h>
#include <stdlib.h>


void MaxMin();
int SearchNum(int);
int SumOfDigit();
void EvnOddInArray();
void AlterNo();
void PrimeNosArray ();
void ArrAdd ();
void MergeArray();
void ArrayRev();
void ArraySort ();



int main()
{
    MaxMin();
    printf("\n");

    printf("\nEntre The NO. For Searching In Array \n");
    int num;
    scanf("%d",&num);
    printf(" Enter Array Element : ");
    SearchNum(num);
    printf("\n");

    printf("Addition is each Element = %d \n", SumOfDigit());
    printf("\n");

    EvnOddInArray();
    printf("\n");

    AlterNo();
    printf("\n");
    
    ArrAdd ();
    printf("\n");

    PrimeNosArray ();
    printf("\n");

    MergeArray();
    printf("\n");

    ArrayRev();
    printf("\n");

    ArraySort ();
    printf("\n");
}



void MaxMin()
{
    int  size, max, min;  
     
     printf("Enter the Array size \n");
     scanf("%d",&size);
     int* arr  ;
     arr=(int*)malloc(size*sizeof(int));



     printf("Enter the array Element \n");
     for(int i =0 ; i<size;i++)
     {
        scanf("%d",&arr[i]);
     }
    max = arr[0];
    min = arr[0];

    for (int i=0;i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    
        if (min > arr[i])
        {
            min = arr[i];
        }

    }
    
    printf("Maximum No. is = %d\n", max);
    printf("Minimumm No. is = %d\n", min);
     free(arr);
}

// Q2 ) 2. Search the given number in array

int  SearchNum(int num)
{     
    int * ptr,size;
    printf("Enter the Array size \n");
     scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
    int i;
    for (i = 0; i <= 5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        printf(" %d ", ptr[i]);
    }

    for (i = 0; i <= 5; i++)
    {
        if (num == ptr[i])
        {
            printf("\n Given No. is %d Found ", num);
            return 0;
        }
    }
    printf("\nGiven No. %d Not Found ", num);
    return 0;
}

// Q3 ) 3. Find sum of all numbers.

int SumOfDigit()
{
    int i, sum = 0;
      int * ptr,size;
    printf("Enter the Array size \n");
     scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + ptr[i];
    }
    // printf(" Addition is each Element = %d \n",sum);
    return sum;
}

// Q4) 4. Find odd and even among the numbers
void EvnOddInArray()
{
    int i;
      int * ptr,size;
    printf("Enter the Array size \n");
     scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
        printf("Enter the Array Element For Checking Evn or Odd \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Evn No Are ");
    for (i = 0; i <= 11; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            printf("%d ", ptr[i]);
        }
    }
    printf("\nOdd No. Are ");

    for (i = 0; i <= 11; i++)
    {
        if (ptr[i] % 2 != 0)
        {
            printf("%d ",ptr[i]);
        }
    }
}
// Q5 ) 5. Print alternate elements in array.

void AlterNo()
{
    int i;
      int * ptr,size;
    printf("Enter the Array size \n");
     scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
    printf("Enter the Array Element For Alterning No.\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Alternate No. Are  ");
    for (i = 0; i <size; i ++)
    {
        printf("%d ",ptr[i]);        
        i=i+1;
    }
}

// Q5) 6. Accept array and print only prime numbers of array.

void PrimeNosArray ()
{
// float avg ,sum=0 ;
int j, i;
  int * ptr,size;
    printf("Enter the Array size \n");
     scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
        printf("Enter the Array Element For Prime No. Or Not \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
printf("\nPrime No . Are ");

for( i=0;i<size;i++)
{
int flag=0;
for (j=2 ; j<ptr[i];j++)
{
 if(ptr[i]%j==0)
 {
 flag++;
}
}
if(flag==0){
printf("%d ",ptr[i]);
}
}
}
// Q7) 7. Take two array and add sum in third array

void ArrAdd ()
{
int i,j ;
  int * ptr1;
  int* ptr2;
  int* ptr3;
  int size;
    printf("Enter the Array size \n");
     scanf("%d",&size);
    ptr1 = (int*)malloc(size * sizeof(int));
    ptr2 = (int*)malloc(size * sizeof(int));
    ptr3 = (int*)malloc(size * sizeof(int));

    printf("Enter the Array Element ptr1 :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr1[i]);
    }
    printf("Enter the Array Element ptr2 :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr2[i]);
    }
   
printf("Addition is Are ptr3 = ptr1 + ptr2 \n");

for(i=0;i<size;i++)
{
ptr3[i] = ptr1[i]+ptr2[i];
printf("%d ",ptr3[i]);
}
}

// Q8) 8. Merge two arrays
// Code :

void MergeArray()
{
int i , j;
 int * ptr1;
  int* ptr2;
  int* ptr3;
  int size;
    printf("Enter the Array size \n");
     scanf("%d",&size);
    ptr1 = (int*)malloc(size * sizeof(int));
    ptr2 = (int*)malloc(size * sizeof(int));
    ptr3 = (int*)malloc(size * sizeof(int));

    printf("Enter the Array Element ptr1 :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr1[i]);
    }
    printf("Enter the Array Element ptr2 :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr2[i]);
    }
printf("Array After Merge :  ");
for (i=0;i<size;i++ )
{
 ptr3[i] = ptr1[i] ; // + arr2[i] ;
// printf(" Arry 3 = %d", arr3[i]) ;
}
for (j=0;j<=size;j++,i++)
{
 ptr3[i] = ptr2[j];
 // printf(" Arry 3 = %d", arr3[i]) ;
 }

   for (i=0;i<=size;i++ )
   { 
    printf(" %d ",ptr3[i]) ;
   }
 }

// Q9) 9. Reverse the given array.

void ArrayRev()
{
int arr[6];
int i ;
printf(" Enter The Array Element For reversing : ");

for (i=0;i<=5;i++)
{
    scanf("%d",&arr[i]);
}
    printf("  Array After Reversing : ");

for (i=5;i>=0;i--)
{
printf(" %d ",arr[i]);
}
}

//Q10) 10. Sort the array
 

void ArraySort ()
{
int i , j;
int arr [5]= { 1,5,8,3,0};
int sort = arr[1];
printf(" Array Element After Sorting : ");

for (i=0;i<=4;i++ )
{
for(j=i+1;j<=4;j++)
{
if(arr[i]>arr[j])
{
int temp = arr[i];
arr[i]=arr[j];
arr[j]= temp;
}
}
}
for (i=0;i<5;i++)
{
 printf(" %d ", arr[i]) ;
 }}

