#include <stdio.h>

#define MAX 100

int deque[MAX];
int front = -1;
int rear = -1;

void insertFront(int value)
{
    if (front == 0)
    {
        printf("Deque Overflow at front\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        front--;
    }

    deque[front] = value;
    printf("%d inserted at front\n", value);
}

void insertRear(int value)
{
    if (rear == MAX - 1)
    {
        printf("Deque Overflow at rear\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }

    deque[rear] = value;
    printf("%d inserted at rear\n", value);
}

void deleteFront()
{
    if (front == -1 || front > rear)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("%d deleted from front\n", deque[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

void deleteRear()
{
    if (front == -1 || front > rear)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("%d deleted from rear\n", deque[rear]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        rear--;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", deque[i]);
    }

    printf("\n");
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- Deque ---\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertRear(value);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                display();
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
