#include<stdio.h>

int bs(int arr[], int key, int low, int high){
    while(low < high){
        int mid;
        mid = low + (high -low)/2;

        if (arr[mid] == key) return mid;

        if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return -1;
}

int main(){

    int arr[] = {7, 11, 16, 23, 45, 64, 77, 84};
    int low = 0;
    int high = 7;
    int result;
    int key = 64;

    result = bs(arr, key, low, high);

    if (result == -1){
        printf("Not found");
    }
    else{
        printf("Element found at index: %d", result);
    }
    
    return 0;
}