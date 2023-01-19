#include <stdio.h>

int Ackermann(int m, int n){
    int ans;
    if(m==0){
        ans = n+1;
    }
    else if (n==0)
    {
        ans = Ackermann(m-1,1);
    }
    else{
        ans = Ackermann(m-1 , Ackermann(m, n-1));
    }
    return ans;
}

int main()
{
    int result = Ackermann(3, 1);
    printf("Result: %d",result);

    return 0;
}