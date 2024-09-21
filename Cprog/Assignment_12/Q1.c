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
     int arr[size]  ;



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

int SearchNum(int num)
{
    int arr[6];
    int i;
    for (i = 0; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        printf(" %d ", arr[i]);
    }

    for (i = 0; i <= 5; i++)
    {
        if (num == arr[i])
        {
            printf("\n Given No. is %d Found ", num);
            return 0;
        }
    }
    printf("\nGiven No. %d Not Found ", num);
}

// Q3 ) 3. Find sum of all numbers.

int SumOfDigit()
{
    int i, sum = 0;
    int arr1[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr1[i];
    }
    // printf(" Addition is each Element = %d \n",sum);
    return sum;
}

// Q4) 4. Find odd and even among the numbers
void EvnOddInArray()
{
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Evn No Are ");
    for (i = 0; i <= 11; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd No. Are ");

    for (i = 0; i <= 11; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
// Q5 ) 5. Print alternate elements in array.

void AlterNo()
{
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Alternate No. Are  ");
    for (i = 0; i < 10; i ++)
    {
        printf("%d ", arr[i]);        
        i=i+1;
    }
}

// Q5) 6. Accept array and print only prime numbers of array.

void PrimeNosArray ()
{
// float avg ,sum=0 ;
int j, i;
int arr [5]= { 23,4,13,11,77};
printf("\nPrime No . Are ");

for( i=0 ; i<5 ; i++)
{
int flag=0;
for (j=2 ; j<arr[i];j++ )
{
 if(arr[i]%j==0)
 {
 flag++;
}
}
if(flag==0){
printf("%d ",arr[i]);
}
}
}
// Q7) 7. Take two array and add sum in third array

void ArrAdd ()
{
int i,j ;
int arr1 [5]= { 1,2,3,4,5};
int arr2 [5]= { 9,8,7,6,5};
int arr3[5];
printf("Addition is Are ");

for(i=0;i<5;i++)
{
arr3[i] = arr2[i]+arr1[i];
printf("%d ",arr3[i]);
}
}

// Q8) 8. Merge two arrays
// Code :

void MergeArray()
{
int i , j;
int arr1 [4]= { 1,2,3,4};
int arr2 [6]= { 5,6,7,8,9,10,};
int arr3 [10];
printf("Array After Merge :  ");
for (i=0;i<4;i++ )
{
 arr3[i] = arr1[i] ; // + arr2[i] ;
// printf(" Arry 3 = %d", arr3[i]) ;
}
for (j=0;j<=6;j++,i++)
{
 arr3[i] = arr2[j];
 // printf(" Arry 3 = %d", arr3[i]) ;
 }

 for (i=0;i<=9;i++ )
{
 printf(" %d ", arr3[i]) ;
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

