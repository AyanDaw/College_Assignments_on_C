#include <stdio.h>
#include <math.h>

int main() {
    int i, j, n, fact, term = 1;
    float sum = -1.0;  // First term is -1

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) //second term theke hisab korchi
    {
        fact = 1;  // Reset factorial

        // Calculate factorial of the next odd number
        for (j = 1; j <= (2 * i + 1); j++) {
            fact *= j;
        }

        // Alternate signs and add to sum
        sum += pow(-1, i+1) * (1.0 / fact);
    }

    printf("The sum of the series is: %.6f\n", sum);
    return 0;
}
