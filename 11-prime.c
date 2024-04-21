#include<stdio.h>

int main(){
    int n, i, prime = 0;
  printf("\nEnter a positive integer: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    prime = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      prime = 1;
      break;
    }
  }

  if (prime == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
    return 0;
}