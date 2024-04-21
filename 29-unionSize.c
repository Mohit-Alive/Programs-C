#include<stdio.h>
#include<string.h>

union student{
    char a[30];
    int b;
};

int main(){
    union student s1;

    printf("The Size of Union is: %d", sizeof(s1));

    
    return 0;
}