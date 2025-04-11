#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("Input: %d\n", n);
    
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            printf("* ");
        }
        printf("\n");
    } else {
        for (int i = 1; i <= n - 1; ++i) {
            printf("* ");
        }
        for (int j = 0; j < n / 2 + 1; ++j) {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
