#include <iostream>
using namespace std;


int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size-1; i++){
        int i1=i;
        if(arr[i]%2!=0){
            for(int j=i+1; j<size; j++){
                int swap = arr[i1];
                arr[i1] = arr[j];
                arr[j] = swap;
                i1 = j;
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}