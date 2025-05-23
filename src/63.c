#include <stdio.h>
int main() {
    int i, j;

    for(i = 0; i <= 10; i++) {
        if(i % 2 == 0)
            continue;
        printf("odd number: %d", i);
    }
    return 0;
}
