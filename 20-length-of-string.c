#include <stdio.h>
#include <string.h>
 
int main(){

    char Str[100];
 
    printf("Enter the String: ");
    gets(Str);
 
    printf("Length of Str is %ld", strlen(Str));

    char stri[] ="my name"; 
    printf("\nSize of Str is %d", sizeof(stri));
 
    return 0;
}