#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int *a;
    int top;
} stack;

void push(stack *s, int ele)
{
    s->top++;
    if (s->top >= s->size)
    {
        printf("STACK OVERFLOW\n\n");
        s->top--;
    }
    else
    {

        s->a[s->top] = ele;
    }
}

int pop(stack *s)
{
    if (s->top == -1)
    {
        printf("STACK IS EMPTY. \n\n");
        return -1;
    }
    else
    {
        int x = s->a[s->top];
        s->top--;
        return x;
    }
}

int isFull(stack *s)
{
    if (s->top >= s->size)
    {
        return 1;
    }
    return 0;
}

int isEmpty(stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}

void display(stack *s)
{
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d ", s->a[i]);
    }
    printf("\n");
}


int main()
{
    stack *s = malloc(sizeof(stack));
    s->top = -1;
    int n;
    printf("ENTER THE SIZE OF STACK: ");
    scanf("%d", &n);
    s->a = malloc(n * sizeof(int));
    s->size = n;
    char c = 'y';
    int n1;
    printf("ENTER NUMBER OF ELEMNTS WISH TO PUSH: ");
    scanf("%d", &n1);

    for (int i = 0; i < n1; i++)
    {
        int e;
        printf("ENTER THE %d ELEMENT OF STACK: \n", i + 1);
        scanf("%d", &e);
        push(s, e);
    }

    while (c != 'n')
    {
        int x;
        printf("ENTER  1 TO DISPLAY.\n\n");
        printf("ENTER  2 PUSH.\n\n");
        printf("ENTER  3 POP.\n\n");
        printf("ENTER  4 CHECK FULL.\n\n");
        printf("ENTER  5 TO CHECK EMPTY.\n\n");
        scanf("%d", &x);
        int x1, e1;
        switch (x)
        {
        case 1:
            display(s);
            break;
        case 2:
            printf("ENTER THE ELEMENT OF STACK: \n");
            scanf("%d", &e1);
            push(s, e1);
            break;
        case 3:
            x1 = pop(s);
            if(x1>0){
            printf("THE POPPED ELEMENT IS %d.\n\n", x1);
            }
            break;
        case 4:
            if (isFull(s))
            {
                printf("STACK IS FULL.\n");
            }
            else
            {
                printf("STACK IS NOT FULL\n");
            }
            break;
        case 5:
            if (isEmpty(s))
            {
                printf("STACK IS EMPTY.\n");
            }
            else
            {
                printf("STACK IS NOT EMPTY.\n");
            }
            break;
        default:
            printf("PLEASE ENTER A VALID CHOICE\n");
            break;
        }
        printf("ENTER n TO EXIT AND ANY OTHER TO CONTINUE\n");
        scanf("%s", &c);
        printf("\n");
    }

    return 0;
}