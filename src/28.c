#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        } else {
            printf("Hello, world! ");
        }
    }

    return 0;
}
