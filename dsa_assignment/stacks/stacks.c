#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top, n;
void push(int *t)
{
    int put;
    if (top > n - 1)
    {
        printf("\nstack overflow");
    }
    else
    {
        printf("\nenter value to be pushed");
        scanf("%d", &put);
        top++;
        *(t + top) = put;
    }
}
void pop(int *t)
{

    if (top <= -1)
    {
        printf("\nstack is already empty:\n ");
    }
    else
    {
        top--;
        printf("\npopped successfully");
    }
}
void display(int *t)
{
    int i;
    if (top < 0)
    {
        printf("\nstack is empty");
        return;
    }
    else
    {
        for (i = top; i > 0; i--)
        {
            printf("\ndata:%d", *(t + i));
        }
    }
}
int main()
{
    int top = -1;

    printf("enter stack size:\n");

    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    int opt;
    while (1)
    {
        printf("\n1.push\n2.pop\n3.display\n4.exit\noption:");
        scanf("%d", &opt);
        if (opt > 3)
            break;
        else
        {
            switch (opt)
            {
            case 1:
                /* code */
                push(a);

                break;

            case 2:
                pop(a);

                break;
            case 3:
                display(a);
                break;
            }
        }
    }
    return 0;
}