#include <stdio.h>

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

// void insertionSort(int *A, int n){
//     int temp;
//     int temp1;
//     for(int i=0; i<n-1;i++){
//         if(A[i]>A[i+1]){
//             temp = A[i];
//             A[i] = A[i+1];
//             A[i+1] = temp;

//             for(int j=i;j-1>-1;j--){
//                 if(A[j-1]>A[j]){
//                 temp1 = A[j-1];
//                 A[j-1] = A[j];
//                 A[j] = temp1; 
//             }  
//             } 
//         }
//     }
// }

void insertionSort(int *A, int n){
    int key,j;
    for(int i=1; i<=n-1;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;

    printArray(A, n); // Printing the array before sorting
    insertionSort(A, n); // Function to sort the array
    printArray(A, n); // Printing the array before sorting

    return 0;
}