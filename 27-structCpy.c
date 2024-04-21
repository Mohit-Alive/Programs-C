#include<stdio.h>
#include<string.h>

struct strname{
    char a[30];
    int b;
};

int main(){

    struct strname s1 = {"Rahul", 20};
    struct strname s2;

    s2 = s1;

    printf("The Name of the first student is %s and his age is %d\n", s2.a, s2.b);

    
    return 0;
}