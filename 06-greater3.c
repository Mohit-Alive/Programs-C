#include<stdio.h>

int main(){

    int n1, n2 , n3;
    printf("Enter the first Number: ");
    scanf("%d", &n1);
    printf("Enter the second Number: ");
    scanf("%d", &n2);
    printf("Enter the third Number: ");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3){
        printf("%d is the greatest", n1);
    }
    else if(n2>n1 && n2>n3){
        printf("%d is the greatest", n2);
    }
    else{
        printf("%d is the greatest", n3);
    }
    return 0;
}