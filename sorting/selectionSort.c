#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n)
{
    int key, temp, minindex;
    for (int i = 0; i <= n - i; i++)
    {
        key = A[i];
        for (int j = i + 1; j < n; j++)
        {
            if (key > A[j])
            {
                key = A[j];
                minindex = j;
            }
        }
        temp = A[i];
        A[i] = key;
        A[minindex] = temp;
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;

    printArray(A, n);    // Printing the array before sorting
    selectionSort(A, n); // Function to sort the array
    printArray(A, n);    // Printing the array before sorting

    return 0;
}