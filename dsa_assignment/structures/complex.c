#include <stdio.h>

typedef struct complex
{
    float real;
    float ima;
    
}comp;

void add(comp c1,comp c2){
    float x = c1.real + c2.real;
    float y = c1.ima + c2.ima;
    printf("%.2f + %.2fi\n",x,y);
}

void sub(comp c1,comp c2){
    float a = c1.real - c2.real;
    float b = c1.ima - c2.ima;
    printf("%.2f + %.2fi\n",a,b);
}

void multi(comp c1,comp c2){
    float a = c1.real * c2.real - c1.ima * c2.ima;;
    float b = c1.real * c2.ima + c1.ima * c2.real;;
    printf("%.2f + %.2fi\n",a,b);
}

int main() {

    comp c1,c2,c3;
    printf("Enter the name of student: ");
    printf("enter real and ima parts of two complex no. resp: ");
    scanf("%f %f",&c1.real,&c1.ima);
    scanf("%f %f",&c2.real,&c2.ima);

    add(c1,c2);
    sub(c1,c2);
    multi(c1,c2);
  
  return 0;
}
