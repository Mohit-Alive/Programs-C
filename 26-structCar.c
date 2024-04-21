#include<stdio.h>
#include<string.h>

struct car{
    char brand[30];
    char model[30];
    int year;
};

int main(){

    struct car toyota = {"Supra", "Mk5", 2019};
    
    printf("The Brand of Car is %s and Model is %s and year of release is: %d\n", toyota.brand, toyota.model, toyota.year);


    
    return 0;
}