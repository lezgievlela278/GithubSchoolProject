#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    float avg = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &n);

    int *grades = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%d", grades + i);
    }

    avg = calculate_average(grades, n);
    printf("The average of your grades is: %.2f\n", avg);

    free(grades);
    return 0;
}

float calculate_average(int *grades, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return sum / n;
}
