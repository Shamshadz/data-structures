// Given an array of integers, find the combination of three elements in the array whose sum is equal to a given value X. Here we will print the first combination that we get. If there is no such combination then print -1.
#include <iostream>
using namespace std;

void func(int a[],int size, int K)
{   
    int flag= -1;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size - 2; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if ((a[i] + a[j] + a[k]) == K)
                {
                    flag=1;
                    cout << a[i] << " " << a[j] << " " << a[k];
                    break;
                }
            }
        }
    }

    if(flag==-1){
        cout<<flag<<endl;
    }
}

int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int K;
    cout << "enter element to find sum of: ";
    cin >> K;

   func(a, size, K);

    return 0;
}