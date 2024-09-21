#include <stdio.h>
#include <stdlib.h>
void Add(int);
int main()
{
    int size;
    printf("How many Int You Want To Store\n");
    scanf("%d", &size);
    Add(size);
}

int * Add(int size)
{
    int *ptr = (int*)malloc(sizeof(int) * (size));
    ptr[0] = 10;
        ptr[1] = 20;

    printf("Add Of ptr : %u\n", ptr);
    printf("Size Of ptr : %d", sizeof(*ptr) * size);
    // free(ptr);
    // printf("Add. Of ptr : %u\n", &ptr);
    return ptr;
}