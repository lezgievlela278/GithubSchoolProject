
// C program to find the nth term of an
// Arithmetic Progression

#include <stdio.h>

int main() {
   int a, d, n;
   scanf("%d %d %d", &a, &d, &n);
   int sum = 0;
   for (int i = 1; i <= n; i++) {
      sum += d;
   }
   printf("The nth term is: %d\n", a + (n - 1) * d);
   return 0;
}