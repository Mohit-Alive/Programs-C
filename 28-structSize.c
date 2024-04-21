#include<stdio.h>
#include<string.h>

struct strname{
    char a[30];
    int b;
};

int main(){

    struct strname s1 = {"Rahul", 20};

    printf("The Size of Structure is: %d", sizeof(s1));

    
    return 0;
}