#include<stdio.h>

int main(){
    int arr[5] = {5, 10, 15, 20, 25};
    
    printf("The Array is: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}