#include <stdio.h>
int stack[100], n ,top = -1;

void push();
void pop();
void show();

void main() {
    int i, choice = 0;

    printf("Enter the number of elements in the stack: ");
    scanf("%d", &n);

    printf("'''''' Stack operations using array ''''''\n");

    while (choice != 4) {
        printf("\nChoose one from below options:\n");
        printf("1. Push\n2. Pop\n3. Show\n4. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Please enter a valid choice\n");
        }
    }
}



// function call 
void push() {
    int value;
    if (top == n-1) {
        printf("Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

void show() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (Top to Bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}