#include<stdio.h>

int main(){
    int a, b, c, avg;
    printf("Enter the first Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    printf("Enter the Third Number: ");
    scanf("%d", &c);
    printf("\n");

    avg = (a+b+c)/3;
    printf("The Average of the Three number is: %d", avg);
    return 0;
}




