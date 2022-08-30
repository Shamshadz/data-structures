#include <stdio.h>

typedef struct distance
{
    float inch;
    float feet;

}dist;


int main() {
    int n = 2;
    dist d[n];
    dist result;
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the d[%d] in inch :",i);
        scanf("%f", &d[i].inch);
        printf("Enter the d[%d] in feet :",i);
        scanf("%f", &d[i].feet);
    }
    
    //adding tow distances
    result.inch = d[0].inch + d[1].inch;
    result.feet = d[0].feet + d[1].feet;

    printf("Sum of distances in inch: %f",result.inch);
    printf("\nSum of distances in feet: %f",result.feet);
  
  return 0;
}