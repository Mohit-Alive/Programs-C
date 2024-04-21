#include<stdio.h>

void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    int m = 10;
    int n = 20;
    swap(&m, &n);
    printf("The value of m is : %d and n is: %d", m , n);
    return 0;
}