#include<stdio.h>

int fib(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    return fib(n-1) +fib(n-2);
}

int main(){
    int n = 5;

    printf("The Fibonacci series till the element n is: \n");
    for (int i = 1; i <= n; i++){
        printf("%d ", fib(i));
    }   
    return 0;
}