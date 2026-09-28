#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void delete()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d deleted from stack\n", stack[top]);

    top--;
}