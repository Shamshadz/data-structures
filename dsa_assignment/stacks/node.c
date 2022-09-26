#include <stdio.h>

int top, n;

struct node{
    int data;
    int next;
}



int main()
{
    int top = NULL;

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
                push(a);

                break;

            case 2:
                pop(a);

                break;
            case 3:
                display(a);
                break;
            case 4:
                isEmpty(a):
                break;
            case 5:
                isFull(a):
                break;
            }
        }
    }

    return 0;
}