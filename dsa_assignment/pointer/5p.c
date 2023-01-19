#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    int A[size];
    int B[size];
    int *p = A, *q = B;

    for(int i=0; i<size; i++){
        printf("Enter A[%d]: ", i);
        scanf("%d", p);
        p++;
    }

    p = A;
    printf("Array A before Copying: ");
    for(int i=0; i<size; i++){
        printf("%d, ", *p);
        p++;
    }

    printf("\nArray B before Copying: ");
    for(int i=0; i<size; i++){
        printf("%d, ", *q);
        q++;
    }

    p = A, q = B;
    for(int i=0; i<size; i++){
        *q = *p;
        p++;
        q++;
    }

    p = A;
    printf("\nArray A After Copying: ");
    for(int i=0; i<size; i++){
        printf("%d, ", *p);
        p++;
    }

    q = B;
    printf("\nArray B After Copying: ");
    for(int i=0; i<size; i++){
        printf("%d, ", *q);
        q++;
    }

   return 0;
}