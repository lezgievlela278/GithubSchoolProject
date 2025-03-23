#include <stdio.h>

void main() {
    int i = 5;
    do {
        printf("Looping... ");
        if (i == 2) {
            break;
        }
        ++i;
    } while (i != 0);
    printf("Finished\n");
}
