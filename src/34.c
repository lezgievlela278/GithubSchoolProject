#include <stdio.h>

int main() {
    int i = 0;
    
    while (i < 10) {
        printf("Hello World!\n");
        
        if (i % 2 == 0) {
            break; // Exit the loop after printing "Hello World!"
        }
        
        i++;
    }

    return 0;
}
