#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int r;
    int f;
    int *arr;
};

int isFull(struct queue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(!isFull(q)){
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val;
    }
    else{
        printf("Queue is Full\n");
    }
}

int dequeue(struct queue *q){
    if(!isEmpty(q)){
        q->f = (q->f +1)%q->size;
        return q->arr[q->f];
    }
    else{
        printf("queue is Empty\n");
    }
}

int main()
{
    struct queue q;
    q.size = 3;
    q.r = q.f = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    printf("Dequeued elememt is %d\n",dequeue(&q));
    printf("Dequeued elememt is %d\n",dequeue(&q));
    printf("Dequeued elememt is %d\n",dequeue(&q));

    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);

    printf("Dequeued elememt is %d\n",dequeue(&q));
    printf("Dequeued elememt is %d\n",dequeue(&q));
    printf("Dequeued elememt is %d\n",dequeue(&q));

    if(isEmpty(&q)){
        printf("Queue is Empty\n");
    }
    if(isFull(&q)){
        printf("Queue is Full\n");
    }

    return 0;
}