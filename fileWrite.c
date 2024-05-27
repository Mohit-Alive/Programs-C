#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    char arr[50] = "Hello World";
    fp = fopen("file.txt", "w");
    if(fp == NULL){
        printf("File not found\n");
    }
    else{
        printf("File is opened\n");
        if(strlen(arr) > 0){
            fputs(arr, fp);
        }
        fclose(fp);
    }

    printf("Data read successfully read from file");
    printf("File is closed now");

    return 0;
}