#include<stdio.h>

int fact (int n){

    if (n==0 || n==1) return 1;

    return n * fact(n-1);

}

int main(){

    int n = 10;
    int factorial = fact(7);

    printf("The Factorial of a number is: %d", factorial);
    
    return 0;
}