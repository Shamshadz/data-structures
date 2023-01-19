#include <stdio.h>

void swap(int *p1, int *p2, int size){

    while (size>0)
    {
        *p1 = *p1 + *p2;
        *p2 = *p1 - *p2;
        *p1 = *p1 - *p2;
        p1++, p2++;
        size--; 
    }
    
}

int main()
{
    int size;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    int A[size];
    int B[size];

    printf("Enter Array A elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &A[i]);
    }

    printf("Enter Array B elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &B[i]);
    }

    printf("\nArrays A and B Before Swapping: ");
    for(int i=0; i<size; i++){
        printf("\n%d   %d", A[i], B[i]);
    }


    swap(A,B,size);

    printf("\nArrays A and B After Swapping: ");
    for(int i=0; i<size; i++){
        printf("\n%d   %d", A[i], B[i]);
    }

   return 0;
}