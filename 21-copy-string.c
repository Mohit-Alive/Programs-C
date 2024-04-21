#include <stdio.h>
#include <string.h>

int main() {
  
  char str1[20] = "Original String";
  char str2[20];


  strcpy(str2, str1);
  printf("The first string str1: %s\n", str1);
  printf("The copied string str2: %s", str2);    
    

  return 0;
}