#include<stdio.h>

int main(){
    int a[10] = {2,3,4,5,6};
    int key = 5;
    int loc;

    for(int i = 0; i<=5; i++){
        if(a[i] == key){
            loc = i+1;
            break;
        }
    }
    if(loc > 0) {
        printf("Key found at index: %d", loc-1);
    }
    else{
        printf("No such element");
    }
    return 0;
}