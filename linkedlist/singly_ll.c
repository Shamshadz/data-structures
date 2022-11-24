#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node * insertAtBegninning(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    head = ptr;
    return head;
}

struct Node * insertInBetween(struct Node *head,int index,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;

    int i=0;
    while(i<index-1){
       p=p->next;
       i++; 
    }
    ptr->next=p->next;
    p->next=ptr;

    return head;
}

struct Node * insertAtEnd(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node * insertAfter(int data,struct Node *prvNode){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prvNode->next;
    prvNode->next=ptr;
    return prvNode;
}

struct Node * deleteAtBegninning(struct Node *head){
    struct Node *ptr = head;
    head = head->next;

    free(ptr);
    return head;
}

struct Node * deleteAtIndex(struct Node *head,int index){
    struct Node *ptr;
    struct Node *p = head;

    int i=0;
    while(i!=index-1){
       p=p->next;
       i++; 
    }
    ptr = p->next;
    p->next = ptr->next;
    free(ptr);

    return head;
}

struct Node * deleteAtEnd(struct Node *head){
    struct Node *ptr = head;
    struct Node *p = head;
    ptr=ptr->next;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    free(ptr);
    p->next=NULL;
    return head;
}

struct Node * deleteUsingValue(struct Node *head,int value){
    struct Node *ptr = head;
    struct Node *p = head;
    ptr=ptr->next;
    while (ptr->data!=value)
    {
        ptr=ptr->next;
        p=p->next;
    }
    p->next=ptr->next;
    free(ptr);
    return head;
}

int main()
{   
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;
    
    linkedListTraversal(head);

    printf("************\n");
    // head = insertAtBegninning(head,4);
    // insertInBetween(head,2,5);
    // insertAtEnd(head,4);
    // insertAfter(4,second);

    // head = deleteAtBegninning(head);
    // deleteAtIndex(head,2);
    // deleteAtEnd(head);
    deleteUsingValue(head,3);

    linkedListTraversal(head);

    return 0;
}