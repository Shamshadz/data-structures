// program to concatenate two strings using pointer
#include <stdio.h>

void sort(int n, int* ptr)
{
    int i, j, t;
 
    for (i = 0; i < n; i++) {
 
        for (j = i + 1; j < n; j++) {
 
            if (*(ptr + j) < *(ptr + i)) {
 
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}

int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};

    printf("Array Before Reverse: ");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    sort(n, arr);

    printf("\nArray After Reverse: ");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

   return 0;
}