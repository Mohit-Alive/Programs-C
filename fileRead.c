#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;

    char arr[50];
    fp = fopen("file.txt", "r");

    if(fp == NULL){
        printf("File not found\n");
    }
    
    else{
        printf("File is opened\n");
        while(fgets(arr , 50, fp != NULL)){
            printf("%s", arr);
        }
        fclose(fp);
    }

    printf("Data read successfully read from file");
    printf("File is closed now");

    return 0;
}