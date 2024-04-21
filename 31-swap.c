#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;

    printf("Value of a and b Before Swap: %d %d\n", a , b);

    // a = a - b;
    // b = a + b;
    // a = b - a;

    a = a + b;
    b = a - b; 
    a = a - b;

    printf("Value of a and b After Swap: %d %d", a , b);
    return 0;
}
