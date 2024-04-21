#include <stdio.h>  
#include<string.h>  
int main()  {

   char str1[20];   
   char str2[20];    
   int value;   

   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);

   value = strcmp(str1,str2);
   
   printf("%d", value);    
   return 0;  
}