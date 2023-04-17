#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int top = -1;
int stack_array[SIZE];

void display();
void push(int);
int pop();
void isFull();
void isEmpty();

void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack_array[i]);
    }
}

void push(int value)
{

    if (top == SIZE - 1)
    {
        printf("\nStack is overload!\n");
    }
    else
    {
        top++;
        stack_array[top] = value;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        int preTopValue = stack_array[top];
        top--;
        return preTopValue;
    }
}

void isFull()
{
    if (top == SIZE - 1)
    {
        printf("Stack is Full!\n");
    }
    else
    {
        printf("Stack is not Full\n");
    }
}

void isEmpty()
{
    if (top == -1)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        printf("Stack is not Empty!\n");
    }
}

int main()
{
    int operation_number = 0;
    int value = 0;
    while (1)
    {
        printf("\nEnter Operation below,\n- prese 1 to push element\n- press 2 to pop element\n- press 3 to check the stack is full\n- press 4 to check the stack is empty\n- Press 5 to display the stack \n- Press 6 to exit\n Enter the Choise : ");
        scanf("%d", &operation_number);

        switch (operation_number)
        {
        case 1:
        {
            printf("Enter the value : ");
            scanf("%d", &value);
            push(value);
            break;
        }

        case 2:
        {
            pop();
            display();
            break;
        }

        case 3:
        {
            isFull();
            break;
        }

        case 4:
        {
            isEmpty();
            break;
        }

        case 5:
        {
            display();
            break;
        }

        case 6:
        {
            display();
            exit(0);
        }

        default:
        {
            printf("Invalid Choice!");
        }
        }
    }

    return 0;
}
