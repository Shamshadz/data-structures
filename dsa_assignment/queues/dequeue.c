#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

int isfull(struct queue q)
{
    if (q.rear == (q.size) - 1)
        return 1;
    else if (q.front > 0)
        return 2;
    else
        return 0;
}
int isEmpty(struct queue q)
{
    if (q.front == q.rear)
        return 1;
    else
        return 0;
}
int first(struct queue q)
{
    if (isEmpty(q))
        printf("Queue is empty");
    else
        return q.Q[q.front + 1];
}
int last(struct queue q)
{
    if (isEmpty(q))
        printf("Queue is empty");
    else
        return q.Q[q.rear];
}
void enqueue(struct queue *q, int x)
{
    if (isfull(*q))
    {
        if (q->front != -1)
        {
            q->Q[q->front] = x;
            (q->front)--;
        }
        else if (q->front == -1)
            printf("Queue is full");
    }

    else
    {
        (q->rear)++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct queue *q)
{
    int x = -1;
    if (isEmpty(*q))
        printf("Queue is empty\n");
    else
    {
        (q->front)++;
        x = q->Q[q->front];
    }
    return x;
}
void display(struct queue q)
{
    for (int i = q.front + 1; i <= q.rear; i++)
        printf("%d ", q.Q[i]);
}

int main()
{
    int choice, n, m;
    struct queue q;
    system("cls");
    printf("Enter the size of the queue : ");
    scanf("%d", &q.size);
    q.front = q.rear = -1;
    q.Q = (int *)malloc(sizeof(int) * q.size);
    while (1)
    {
        // system("cls");
        printf("\n\n-------------------------------------\n");
        printf("\n\n1.Enqueue \n2.Dequeue \n3.Display\n4.First \n5.Last \n6.isEmpty \n7.isFull \n8.exit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element : ");
            scanf("%d", &n);
            enqueue(&q, n);
            break;
        case 2:
            n = dequeue(&q);
            printf("Dequed element is %d\n", n);
            break;
        case 3:
            printf("\nElements in queue are : ");
            display(q);
            break;
        case 4:
            printf("first element is : %d \n", first(q));
            ;
            break;
        case 5:
            printf("last element is : %d \n", last(q));
            break;
        case 6:
            if (isEmpty(q))
                printf("Queue is Empty\n");
            else
                printf("Queue is not empty\n");
            break;
        case 7:
            if (isfull(q))
                printf("Queue is full\n");
            else
                printf("Queue is not full\n");
            break;

        case 8:
            exit(0);

        default:
            printf("INVALID CHOICE\n");
            break;
        }
    }
    free(q.Q);
}
