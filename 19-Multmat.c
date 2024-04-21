#include <stdio.h>

int main() {
    int arr[2][2] = {{1,2},{3,4}};
    int brr[2][2] = {{5,6}, {7,8}};
    int mul[2][2];
    printf("The First Matrix is:\n");
    for(int i =0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", arr[i][j]);
        }
            printf("\n");
    }
    
    printf("The Second Matrix is:\n");
    for(int i =0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", brr[i][j]);
        }
            printf("\n");
    }
    
    printf("The Multiplication of Matrices is:\n");
    for(int i =0; i<2; i++){
        for(int j=0; j<2; j++){
            mul[i][j] = 0;
            for(int k =0; k<2; k++){  //coloumn
                mul[i][j] += arr[i][k] * brr[k][j];
            } 
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}