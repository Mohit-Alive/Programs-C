#include <stdio.h> 
#include <string.h>

void count_vowels_and_consonant(char* str) 
{ 
    int vowels = 0, consonants = 0; 
 
    for (int i = 0; str[i] != '\0'; i++) { 
 
        char ch = str[i]; 
 
        if (   ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
            vowels++; 

        else if (ch == ' ') 
            continue; 
 
        else
            consonants++; 
    } 
 
    printf("\nVowels: %d", vowels); 
    printf("\nConsonants: %d", consonants); 
} 

int main() 
{ 
    char* str = "Padh lo Haramiyo"; 
    printf("String: %s", str); 
 
    count_vowels_and_consonant(str); 
 
    return 0; 
} 