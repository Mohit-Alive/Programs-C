#include<stdio.h>

void swap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of m is : %d and n is: %d", a , b);
    
}

int main(){
    int m = 10;
    int n = 20;
    swap(m,n);
    return 0;
}