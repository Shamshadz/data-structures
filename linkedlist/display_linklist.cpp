#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
}*first =NULL;

void create(int A[], int n){
    int i;
    node *t, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++){
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next=t;
        last=t;
    }

};

// void display(node *p){
//     while(p!=NULL){
//         cout<<p->data<<endl;
//         p=p->next;
//     }
// }

void RDisplay(node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

// int count(node *p){
//     int c=0;
//     while(p!=0){
//         c++;          // O(n) - time
//         p=p->next;    // O(1) - space - constant
//     }
//     return (c);
// }

// int count (node *p){      // recursive method
//     if(p==0){
//         return 0;          // O(n) - Time
//     }                     // O(n) - Space
//     return 1 + count(p->next);
// }

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

int main() {

    int A[]={2,4,54,65,21};

    create(A,5);

    // display(first);
    RDisplay(first);
    // count(first);
    // cout<<Add(first);
    // cout<<max(first);

    

   return 0;
}