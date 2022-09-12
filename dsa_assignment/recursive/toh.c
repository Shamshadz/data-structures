#include <stdio.h>

void toh(int nd, char from, char to, char aux){
    if(nd==0){
        return;
    }
    toh(nd-1, from, aux, to);
    printf("Move Disk %d from rod %c to rod %c \n", nd, from, to);
    toh(nd-1, aux, to, from);

}
    

int main()
{   int n = 3;
    toh(n,'A','C','B');

    return 0;
}