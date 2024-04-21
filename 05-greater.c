#include<stdio.h>

int main(){


    int a, b;
    printf("Enter the first Number: ");
    scanf("%d", &a);
    printf("Enter the secomd Number: ");
    scanf("%d", &b);
    if(a>b){
        printf("%d is greater", a);
    }
    else{
        printf("%d is greater", b);
    }
    return 0;

    
}