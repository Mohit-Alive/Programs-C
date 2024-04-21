#include<stdio.h>

int main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    for(int i= 1;i<=n;i++){
        for(int j =0; j<n-i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}