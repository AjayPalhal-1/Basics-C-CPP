#include <stdio.h>
#define MAX 5

void push(int);
void pop();

int top = -1;

int stack[MAX];



int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
}

void push(int value)
{
    if (isfull() == 0)
    {

        top++;
        stack[top] = value;
        printf("Pushed value %d Successfuly\n", value);
    }
    else
    {
        printf(" Overlow \n");
    }
}

void pop()
{
    if (isempty() != 1)
    {
        int value = stack[top];
        top--;
        printf("\nPopped Value = %d ", value);
    }
    else
    {
        printf("\nStack Undeflow");
    }
}

int isfull()
{
    if (top == MAX - 1)
    {
        // printf("Stack Is Overflow \n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}