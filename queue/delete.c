#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d deleted from queue\n", queue[front]);

    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}
