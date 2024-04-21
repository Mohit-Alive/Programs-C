#include<stdio.h>

int main(){
    int arr[2][2] = {{1,2}, {3,4,}};
    printf("The Matrix is:\n");
    for(int i =0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", arr[i][j]);
        }
            printf("\n");
    }
    
    printf("The Transposed Matrix is:\n");
    for(int i =0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", arr[j][i]);
        }
            printf("\n");
    }
    return 0;
}

// multiplication table
// 09 Plaindrome
// 10 armstrong or not
// 11 prime or not
// 12 print half pyramid of stars
// 13 full pyramid of stars
// 14 design a calculator
// 15 perform bitwise operators
// 16 print 1 D Array
// 17 to Add two matrices of sixe 2*2
// 18 Print transpose of a matrix
// 19 multiplication of 2 matrices