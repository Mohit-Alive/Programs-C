#include<stdio.h>
#include<string.h>
int main(){

 char str1[20] = "Aeroplane";
 char str2[20] = "plane";
 
 char* occur = strstr(str1, str2);

 printf("The First Occurrence of string2 in string1 is: %s", occur);
 return 0;

}