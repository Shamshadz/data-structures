#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
struct queue *createqueue(int max)
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue *) * max);
    q->size = max;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(sizeof(int) * max);
    return q;
}
void enqueue(struct queue *q, int x)
{
    if (isfull(*q))
        printf("Queue is full");
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
        printf("Queue is empty");
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
int isfull(struct queue q)
{
    if (q.rear == (q.size) - 1)
        return 1;
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
int main()
{
    system("cls");
    int arr[100], i, n;
    struct queue *q1, *q2, *q3, *q4;
    printf("\nEnter number of elements you want to enter : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    q1 = createqueue(10);
    q2 = createqueue(10);
    q3 = createqueue(10);
    q4 = createqueue(10);
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 10)
            enqueue(q1, arr[i]);
        else if (arr[i] >= 10 && arr[i] < 19)
            enqueue(q2, arr[i]);
        else if (arr[i] >= 20 && arr[i] < 29)
            enqueue(q3, arr[i]);
        else
            enqueue(q4, arr[i]);
    }
    printf("\n\nElements in queue 1 : ");
    display(*q1);
    printf("\nElements in queue 2 : ");
    display(*q2);
    printf("\nElements in queue 3 : ");
    display(*q3);
    printf("\nElements in queue 4 : ");
    display(*q4);
    free(q1);
    free(q2);
    free(q3);
    free(q4);
    return 0;
}