#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void insert(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;

    printf("%d inserted into stack\n", value);
}

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

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    int choice;
    int value;

    while (1)
    {
        printf("\n===== STACK MENU =====\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);

                insert(value);
                break;

            case 2:
                delete();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}