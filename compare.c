#include <stdio.h>
#include <string.h>

int compare(char a[], char b[])
{
    int flag = 0, i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}

int main()
{
    char str1[20];
    char str2[20];
    int value;

    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    return 0;
}