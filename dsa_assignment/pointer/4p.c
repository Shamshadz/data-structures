#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    int A[size];
    int *p = A;

    for(int i=0; i<size; i++){
        printf("Enter A[%d]: ", i);
        scanf("%d", p);
        p++;
    }

    p = A;

    printf("Printing Array using pointer:\n");

    for(int i=0; i<size; i++){
        printf("%d, ", *p);
        p++;
    }

   return 0;
}