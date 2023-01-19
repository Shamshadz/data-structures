#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    node *t, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// void RDisplay(node *p){
//     if(p!=NULL){
//         cout<<p->data<<" ";
//         RDisplay(p->next);
//     }
// }

// int count(node *p){
//     int c=0;
//     while(p!=0){
//         c++;          // O(n) - time
//         p=p->next;    // O(1) - space - constant
//     }
//     return (c);
// }

int count (node *p){      // recursive method
    if(p==0){
        return 0;          // O(n) - Time
    }                     // O(n) - Space
    return 1 + count(p->next);
}

// int Add(node *p){          // recursive O(n), O(n)
//     int sum = 0;
//     if(p==NULL){
//         return sum;
//     }
//     else{
//     sum += p->data;
//     return Add(p->next) + sum;
//     }
// }

// int Add(node *p){
//     int sum = 0;
//     while(p){
//         sum += p->data;
//         p=p->next;
//     }
//     return sum;
// }

// int max(node *p){   // Not Understood - Recursive Function
//     int x=0;
//     if(p==0){
//         return INT32_MIN;
//     }
//     else{
//         x=max(p->next);
//         if(x>p->data){
//             return x;
//         }
//         else{
//             return p->data;
//         }
//     }
// }

// node *LSearch(node *p, int key) 
// {

//     node *q = NULL;

//     while (p != NULL)
//     {
//         if (key == p->data)
//         {
//             q->next = p->next;
//             p->next = first;
//             first = p;
//             return p;
//         }
//         q = p;
//         p = p->next;
//     }
//     return NULL;
// }

// node *RSearch(node *p, int key)
// {
//     if (p == NULL)
//     {
//         return NULL;
//     }
//     if (p->data = key)
//     {
//         return p;
//     }
//     return RSearch(p->next, key);
// }

// void Insert(node *p, int pos, int x)
// {
//     node *t = new node;

//     if(pos < 0 || pos > count(p))
//         return;
        
//     t->data = x;
//     t->next = NULL;
    

//     if (pos == 0)
//     {
//         t->next = first;
//         first = t;
//     }
//     else
//     {
//         for (int i = 0; i < pos-1; i++)
//         {
//             p = p->next;
//         }
//             t->next = p->next;
//             p->next = t;
//     }
// }

// void sortedInsert(node *p , int n){
//     node *t = new node;
//     node *q = NULL;
//     t->data = n;
//     t->next = NULL;
//     if (first == NULL){
//         first = t;
//     }
//     else{
//         while(p && p->data < n){
//             q=p;
//             p = p->next;
//         }
//         if (p==first){
//             t->next = first;
//             first = t;
//         }
//         else{
//             t->next = q->next;
//             q ->next = t;
//         }
//     }
// }

// int deleteNode(int pos){
//     int x = -1;
//     node*q = NULL;
//     node*p = first;
//     if(pos < 1 || pos > count(p)){
//         return x;
//     }
//     if(pos==1){
//         x = first->data;
//         first = first->next;
//         delete p;
//         return -1;
//     }
//     else{
//         for(int i = 0; i < pos-1 && p; i++){
//             q = p;
//             p = p->next;
//         }
//         if(p)
//             q->next = p->next;
//             x = p->data;
//             delete p;
//             return x;
//     }
// }

// int check_sorted(node *p){
//     int x = INT32_MIN;
//     while (p!=NULL)
//     {
//         if(x> p->data){
//             return 0;
//         }
//         x = p->data;
//         p = p->next;
//     }
//     return 1; 
// }

void remove_duplicate_sorted(node *p){
    node *q = p->next;
    while(p!= NULL){
        if(q->data != p->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{

    int A[] = {2, 174, 36, 36, 121};
    node *temp = NULL;

    create(A, 5);

    display(first);
    // RDisplay(first);
    // count(first);
    // cout<<Add(first);
    // cout<<max(first);

    // temp = LSearch(first, 21);
    // if (temp)
    //     cout<<"Key is found "<<temp->data<<endl;
    // else
    //     cout<<"Key not found"<<endl;

    // Insert(first, 3, 97);
    // sortedInsert(first,122);
    // deleteNode(3);

    // if(check_sorted(first)){
    //     cout<<"link is sorted"<<endl;
    // }
    // else{
    //     cout<<"link is not sorted"<<endl;
    // }

    remove_duplicate_sorted(first);
    display(first);

    return 0;
}