#include <stdio.h>

void main() {
    int i;

    printf("Hello, World!\n");
    for(i = 0; i < 5; i++) {
        if(i % 2 == 0) {
            printf("Number is even: ");
            break;
        }
        printf("Number is odd: ");
    }
}
