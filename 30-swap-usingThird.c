#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c = 0;

    printf("Value of a and b Before Swap: %d %d\n", a , b);

    c = a;
    a = b;
    b = c;

    printf("Value of a and b After Swap: %d %d", a , b);
    return 0;
}