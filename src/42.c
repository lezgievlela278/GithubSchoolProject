#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        int randomNum = rand();
        array[i] = randomNum;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
