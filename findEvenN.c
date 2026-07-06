#include "stdio.h"

int main() {
    int n, i, sum, num, rem;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    i = 1;
    sum = 0;
    while (i <= n) {
      printf("Enter data number %d: \n", i);
      scanf("%d", &num);
      rem = num % 2;

      if (rem == 0) {
          sum = sum + num;
          i = i + 1;
      }
      printf("The sum is %d\n", sum);
    }
}
