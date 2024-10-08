#include <stdio.h>
#include <stdlib.h>
int * Add();
 int count =0;
  int size =2;    

int main()
{
    int * ptr = Add();
    printf("Stored Data Is :");
    for (int i =0 ; i<count;i++)
    {
    printf(" %d ",ptr[i]);
    }
}

int * Add( )
{
    int *ptr = (int*)malloc(sizeof(int) * (size));
    int Esize;
     printf("How Element You Want To Store\n");
     scanf("%d",&Esize);
      if(size<Esize|| size<(Esize+count))
    {
        printf("Memory Bhdhana Padega Mera Bhaiii\n");
        size = size + Esize;
        
     ptr =(int *) realloc(ptr,sizeof(int)*size);
        printf("Memory Bhad Gya bhaiii");
    }
         printf("Enter Array Element\n");

    for (int i =0 ;i<Esize;i++) 
    {
    scanf("%d",&ptr[i]);
    count++;
    }
    //printf("Add Of ptr : %u\n", ptr);
    //printf("Size Of ptr : %d", sizeof(*ptr) * size);
    // free(ptr);
    // printf("Add. Of ptr : %u\n", &ptr);
   
    return ptr;
}