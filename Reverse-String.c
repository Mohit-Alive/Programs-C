#include<stdio.h>

void reverse(char *str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    for(int i= length-1;i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}

int main(){
    char str[] = "Hello World";
    printf("Reversed String: ");
    reverse(str);
    
    return 0;
}